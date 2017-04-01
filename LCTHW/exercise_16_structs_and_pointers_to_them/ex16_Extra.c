#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


/*	Structure declaration does not allocate any memory
	The struct Person is now a compound data type, 
	which means you can now refer to struct Person in the 
	same kinds of expressions you would other data types.*/
struct Person {
	char *name;
	int age;
	int height;
	int weight;
} __attribute__ ((__packed__)); //Otherwise struct would be 24?! padding

void personPrint(struct Person madePeep)
{
	//printf("&madePeep: %p\n", &madePeep);	//Print address
	printf("Person Name: 	%s\n", madePeep.name);
	printf("Person Age: 	%d\n", madePeep.age);
	printf("Person Height: 	%d\n", madePeep.height);
	printf("Person Weight: 	%d\n", madePeep.weight);
	printf("\n");
}

struct Person personCreate(char *pName, int pAge, int pHeight, int pWeight)
{
	struct Person newPeep; // __attribute__ ((__packed__))
	newPeep.name 	= pName;
	newPeep.age		= pAge;
	newPeep.height	= pHeight;
	newPeep.weight	= pWeight;

	//printf("&newPeep: %p\n", &newPeep);	//Print address

	return newPeep;
}

int main(int argc, char *argv[])
{
	printf("int: %ld\n", sizeof(char *));
	struct Person fernando = personCreate("Fernando", 22, 65, 155);	
	struct Person joe	= personCreate("Joe Alex", 32, 64, 140);
	struct Person frank	= personCreate("Frank Blank", 20, 72, 180);

	printf(	"&fernando: %p\tfernando size: %ld\n\n"	//Print address and size
			"&joe: %p\tjoe size: %ld\n\n"
			"&frank: %p\tfrank size: %ld\n\n",
			&fernando, sizeof(fernando),
			&joe, sizeof(joe),
			&frank, sizeof(frank));
	
	printf("struct size size: %ld\n", 
			((strlen(fernando.name) + 1 + sizeof(fernando))));

	printf("Fernando is at memory location %p:\n", &fernando);
	personPrint(fernando);
	printf("Joe is at memory location %p:\n", &joe);
	personPrint(joe);
	printf("Frank is at memory location %p:\n", &frank);
	personPrint(frank);

	// make everyone age 20 years and print them again
	fernando.age += 20;
	personPrint(fernando);

	joe.age += 20;
    joe.height -= 2;
    joe.weight += 40;
    personPrint(joe);

    frank.age += 20;
    frank.weight += 20;
    personPrint(frank);

	return 0;

}
