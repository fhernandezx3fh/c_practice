#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct dataWord
{
    unsigned char locUvProg;
    unsigned char irProg;
    unsigned char irDelay;
    unsigned char remUvProg[100];
};

struct command
{
    unsigned char  devAddress;
    unsigned char  subAddress;
    unsigned char  wordCount;
    struct  dataWord *dWordQueue;
};

void printStruct(struct command cmd)
{
	printf("Employee ID:\n");	
}

struct command commandQueue[10];
struct command *cQptr;
struct dataWord dataqueue[10];
struct dataWord *dQptr = dataqueue;



int main(int argc, char *argv[])
{
cQptr = commandQueue;
commandQueue[0].dWordQueue = dataqueue;
printStruct(commandQueue[0]);


	return 0;
}

