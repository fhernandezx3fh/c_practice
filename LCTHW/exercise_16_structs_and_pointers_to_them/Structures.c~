/* =============================================================================
 *  Software Unit Name:  Structures.c
 *	
 *  CSCI:  
 *
 *  CSC:    
 *
 *  Configuration Control:  
 *
 *  Date Created:  
 *
 *  Author: Fernando Hernandez  
 *
 *  Abstract: 
 *	The purpose of this program is to demonstrate strucures without using 
 *	pointers.
 *
 *
 *  Revision History:
 *
 *  Date      Resp Eng        Description of change
 *  20150430  FHernandez      Created     
 *
 * =============================================================================
 *
 *                Copyright BAE Systems 2015
 *
 * DISTRIBUTION:  
 *
 * =============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a struct datatype Person
struct Person {
    char *name;  //Constraing string length to 25
    int age;
    int height;
    int weight;
	char mychar;
};

struct Person personCreate(char *pName, int pAge, int pHeight, int pWeight, char pchar)
{
	struct Person who;
		who.name = pName;
		who.age = pAge;
		who.height = pHeight;
		who.weight = pWeight;
		who.mychar = pchar;

	return who;	
}

void ptrpersonCreate(struct Person *peep)
{
		peep->name = "Hernandez";
		peep->age = 22;
		peep->height = 65;
		peep->weight = 155;
		peep->mychar = 'H';
}

void personPrint(struct Person who)
{
	printf("Name: %s\n", who.name);
	printf("\tAge: %d\n", who.age);
	printf("\tHeight: %d\n", who.height);
	printf("\tWeight: %d\n", who.weight);
	printf("\tmychar: %c\n", who.mychar);
}

void ptrpersonPrint(struct Person *pwho)
{
	printf("Name: %s\n", pwho->name);
	printf("\tAge: %d\n", pwho->age);
	printf("\tHeight: %d\n", pwho->height);
	printf("\tWeight: %d\n", pwho->weight);
	printf("\tmychar: %c\n", pwho->mychar);
}

int main(int argc, char *argv[])
{
	struct Person fernando = personCreate("Fernando", 22, 65, 155, 'F');
	personPrint(fernando);
	
	struct Person person2;
	struct Person *hernandez = &person2;

	ptrpersonCreate(hernandez);
	ptrpersonPrint(hernandez);	

	return 0;
}

