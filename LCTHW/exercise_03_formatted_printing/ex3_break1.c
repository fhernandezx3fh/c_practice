// Exercise in breaking program
#include <stdio.h>

int main()
{
	int age = 10;
	int height = 72;
	
	/*	Removing age variable while keeping format sequence
		will produce unpredictable results.*/
	printf("I am %d years old.\n");
	printf("I am %d inches tall.\n", height);
	
	return 0;
}
