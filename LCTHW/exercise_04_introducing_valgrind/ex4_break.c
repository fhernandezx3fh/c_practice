#include <stdio.h>

/* 	Warning: This is wrong on purpose. */

int main()
{
	int age = 10;
	int height;
	/* 	We did not initialize this variable */

	printf("I am %d years old.\n");
	/* 	We did not include the age variable,
		eventhough we have a format sequence */
	printf("I am %d inches tall.\n", height);

	return 0;
}
