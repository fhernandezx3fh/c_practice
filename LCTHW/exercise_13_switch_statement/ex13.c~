#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2) {
		printf("ERROR: You need one argument.\n");
		// this is how you abort a program
		return 1;
	}

	int i = 0;
	for(i = 0; argv[1][i] != '\0'; i++) {
		char letter = argv[1][i];

		switch(letter) {
			case 'a':
			case 'A':
				printf("%d: 'A'\n", i);
				break;
			
			case 'e':
			case 'E':
				printf("%d: 'E'\n", i);
				break;

			case 'i':
			case 'I':
				printf("%d: 'I'\n", i);
				break;

			case 'o':
			case 'O':
				printf("%d: 'O'\n", i);
				break;

			case 'u':
			case 'U':
				printf("%d: 'U'\n", i);
				break;

			case 'y':
			case 'Y':
				if(i > 2) {
					// it's only sometimes Y
					printf("%d: 'Y'\n", i);
				}				
				break;
		default:
			printf("%d: %c is not a vowel\n", i, letter);
		}
	}	

	return 0;
}


/*	The compiler marks the place in the program where the switch-statement starts, let's call this location Y.
It then evaluates the expression in switch(letter) to come up with a number. In this case the number will be the raw ASCII code of the letter in argv[1].
The compiler has also translated each of the case blocks like case 'A': into a location in the program that is that far away. So the code under case 'A' is at Y+'A' in the program.
It then does the math to figure out where Y+letter is located in the switch-statement, and if it's too far then it adjusts it to Y+default.
Once it knows the location, the program "jumps" to that spot in the code, and then continues running. This is why you have break on some of the case blocks, but not others.
If 'a' is entered, then it jumps to case 'a', there's no break so it "falls through" to the one right under it case 'A' which has code and a break.
Finally it runs this code, hits the break then exits out of the switch-statement entirely.*/
