#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

	struct Student
	{
	   char *name;
	   int roll;
	   float marks;
	};

void printStruct(struct Student stud)
{
	printf("&stud: %p\tstud size: %ld\n", stud, sizeof(stud));	
	printf("Student name: %s\n", stud.name);
}



int main(int argc, char *argv[])
{
	// You can initialize structures using this format	
	struct Student std1 = {"Pritesh",67,78.3};
	struct Student std2 = {"Don",62,71.3};

	printf(	"&std1: %p\tstd1 size: %ld\n"
			"&std2: %p\tstd1 size: %ld\n",
			&std1, sizeof(std1),
			&std2, sizeof(std2));

	printStruct(std1);
	printStruct(std2);

	// When you want to enter in a value to a string, use strcpy!!
	//strcpy(std1.name, "Fernando");
	//printf("Student 1 name: %s\n", std1.name);	

	return 0;
}

