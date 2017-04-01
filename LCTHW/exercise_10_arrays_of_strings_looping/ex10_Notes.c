#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// go through each string in argv
	// why am I skipping argv[0]?
	printf("There are %d argument(s).\n", argc);
	printf("Remember that arg[0] is the program name!\n");
	
	for(i = 0; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	/*	The OS passes each command line argument as a 
		string in the argv array. The program's name (./ex10) is at 0, with the 		rest coming after it.
		
		The OS also sets argc to the number of arguments in 
		the argv array so you can process them without going past the end. 	
		Remember that if you give one argument, 
		the program's name is the first, so argc is 2.*/


	// Let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	int num_states = 4;

	for(i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}

	printf("%c\n",
			states[1][3]); 

	/*	From this you should be able to figure out that in C you make an "array
		of strings" by combining the char *str = "blah" syntax with the char str
		[] = {'b','l','a','h'} syntax to construct a 2-dimensional array. The
		syntax char *states[] = {...} on line 14 is this 2-dimension combination,
		with each string being one element, and each character in the string
		being another.*/
	
	return 0;
}
