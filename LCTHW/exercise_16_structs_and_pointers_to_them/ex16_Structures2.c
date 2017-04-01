#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#define NAME_MAX 25

struct Employee
{
	int 	id;
	char 	fname[NAME_MAX];
   	char 	lname[NAME_MAX];
};

struct Employee createEmployee(int id, char *fname, char *lname)
{
	struct Employee emp;
	emp.id = id;	
	strcpy(emp.fname, fname);
	strcpy(emp.lname, lname);
	
	printf("&emp: %p\n", &emp);
	return emp;
}

void printEmployee(struct Employee emp)
{
	printf("Employee ID: %d\tFirst Name: %s\tLast Name: %s\n", emp.id, emp.fname, emp.lname);	
}

int main(int argc, char *argv[])
{
	struct Employee emp1 = {1, "Fernando", "Hernandez"};
	//printEmployee(emp1);
	printf("Locally created struct: struct Employee emp1 = {1, \"Fernando\", \"Hernandez\"};\n");	
	printf("Employee: %d\n", emp1.id);

	struct Employee emp2 = createEmployee(1, "Fernando", "Hernandez");	
	printEmployee(emp2);
	printf("&emp2: %p\n", &emp2);

	return 0;
}

