// Exercise in breaking program
#include <stdio.h>

int main()
{
	/*	Removing age variable while keeping format sequence
		will produce unpredictable results.*/	
	int age;
	int height = 72;
		
	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height);
	
	return 0;
}
