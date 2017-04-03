#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

struct Address {
	int id;
	int set;
	char name[MAX_DATA];
	char email[MAX_DATA];
};

struct Database {
	struct Address rows[MAX_ROWS];
};

struct Connection {
	FILE *file;
	struct Database *db;
};

void die(const char *message)
{
	if(errno) {
		perror(message);
	} else {
		printf("ERROR: %s\n", message);
	}

	exit(1);
}

void die1(const char *message, struct Connection *conn)
{
	if(errno) {
		perror(message);
	} else {
		printf("ERROR: %s\n", message);
	}

	exit(1);
}

void Address_print(struct Address *addr)
{
	printf("%d %s %s\n",
			addr->id, addr->name, addr->email);
}

void Database_load(struct Connection *conn)
{
	int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
	if(rc != 1) die1("Failed to load database.", conn);
}

struct Connection *Database_open(const char *filename, char mode)
{
	struct Connection *conn = malloc(sizeof(struct Connection));
	if(!conn) die1("Memory error", conn);

	conn->db = malloc(sizeof(struct Database));
	if(!conn->db) die1("Memory error", conn);
	
	if(mode == 'c') {
		conn->file = fopen(filename, "w");
	} else {
		conn->file = fopen(filename, "r+");

		if(conn->file) {
			Database_load(conn);
		}
	}

	if(!conn->file) die1("Failed to open the file", conn);

	return conn;
}

void Database_close(struct Connection *conn)
{
	if(conn) {
		if(conn->file) fclose(conn->file);
		if(conn->db) free(conn->db);
		free(conn);
	}
}

void Database_write(struct Connection *conn)
{
	rewind(conn->file);

	int rc = fwrite(conn->db, sizeof(struct Database), 1, conn->file);
	if(rc != 1) die1("Failed to write database.", conn);

	rc = fflush(conn->file);
	if(rc == -1) die1("Cannot flush database.", conn);	
}

void Database_create(struct Connection *conn)
{
	int i = 0;
	
	for(i = 0; i < MAX_ROWS; i++) {
		// make a prototype to initialize it
		struct Address addr = {.id = i, .set = 0};
		// then just assign it
		conn->db->rows[i] = addr;
	}
}

void Database_set(struct Connection *conn, int id, const char *name, const char *email)
{
	struct Address *addr = &conn->db->rows[id];
	if(addr->set) die1("Already set, delete it first", conn);
	
	addr->set = 1;
	// WARNING: bug, read the "How To Break It" and fix this
	char *res = strncpy(addr->name, name, MAX_DATA);
	// demonstrate the strncpy bug
	if(!res) die1("Name copy failed", conn);

	res = strncpy(addr->email, email, MAX_DATA);
	if(!res) die1("Email copy failed", conn);
}

void Database_get(struct Connection *conn, int id)
{
	struct Address *addr = &conn->db->rows[id];

	if(addr->set) {
		Address_print(addr);
	} else {
		die1("ID is not set", conn);
	}
}

void Database_delete(struct Connection *conn, int id)
{
	struct Address addr = {.id = id, .set = 0};
	conn->db->rows[id] = addr;
}

void Database_list(struct Connection *conn)
{
	int i = 0;
	struct Database *db = conn->db;

	for(i = 0; i< MAX_ROWS; i++) {
		struct Address *cur = &db->rows[i];

		if(cur->set) {
			Address_print(cur);
		}
	}
}

int main(int argc, char *argv[])
{
	struct Connection *conn = {NULL};
	if (argc < 3) die1("USAGE: ex17 <dbfile> <action> [action params]", conn);

	char *filename = argv[1];
// You have to use argv[2][0], since we are looking for the char
	char action = argv[2][0];
/*	Create a pointer to a Connection structure conn 
	Connection struct consists of a FILE struct and the entire database struct */

	conn = Database_open(filename, action);
	int id = 0;

	if(argc > 3) id = atoi(argv[3]);
	if(id >= MAX_ROWS) die1("There's not that many records.", conn);

	switch(action) {
		case 'c':
			Database_create(conn);
			Database_write(conn);
			break;
		
		case 'g':
			if(argc != 4) die1("Need an id to get", conn);
			
			Database_get(conn, id);
			break;
		
		case 's':
			if(argc != 6) die1("Need an id, name, email to set", conn);

			Database_set(conn, id, argv[4], argv[5]);
			Database_write(conn);
			break;
		
		case 'd':
			if(argc != 4) die1("Need id to delete", conn);

			Database_delete(conn, id);
			Database_write(conn);
			break;
		
		case 'l':
			Database_list(conn);
			break;
		
		default:
			die1("Invalid action, only: c=create, g=get, s=set, d=del, l=list", conn);		
	}

	Database_close(conn);

	return 0;
}