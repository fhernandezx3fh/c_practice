#include <stdio.h>



int main(int argc, char *argv[])
{
	int i = 0;
	printf("\n");
	
	// A string is an array of chars. Here is one way to define it...	
	char chra[9] = {'f', 'e', 'r', 
					'n', 'a', 'n', 
					'd', 'o', '\0'};

	// Initialize pointer to the start of a string using only the string name
	char *pchra = chra; 
	
	char *pchrb, *pchrc;
	
	// Initialize pointer after declaration. Set pchrb to the base address of chra
	pchrb = chra;

	// Here we are using the address of a character, which is an element of the character array.
	pchrc = &chra[0];

	printf("chra = %s\n", chra);
	printf("chra address = %p\n", &chra);
	printf("size of chra = %ld\n", sizeof(chra));
	printf("base chra address = %p\n", pchra);

	printf("\n");

	printf("pchra = %s\n", pchra);
	printf("pchrb = %s\n", pchra);
	printf("pchrc = %s\n", pchra);

	printf("\n");

	printf("pchra address = %p\n", pchra);	
	printf("pchrb address = %p\n", pchrb);
	printf("pchrc address = %p\n", pchrc);

	printf("\n");
	
	for(i = 0; i < sizeof(chra); i++)
	{
		printf("address: %p - pchra[%d]= %c\n", &pchra[i], i, pchra[i]);
	}
	printf("\n");

	printf("Another String\n");
	char *chrb;
	chrb = "Fernando Hernandez";

	printf("chrb = %s\n", chrb);
	printf("chrb address = %p\n", chrb);
	printf("chrb[1] address = %p\n", &chrb[1]);
	printf("size of chrb = %ld\n", sizeof(chrb));

	//address of pointer
	printf("base chrb address = %p\n", chrb);
	printf("chrb[3] = %c\n", chrb[3]);

	return 0;
}

