#include <stdio.h>

//printf("%s has %d years alive.\n",names[i], ages[i]);

int main(int argc, char *argv[])
{
	int a, *pa;
	int b, *pb;

	// Data before initialization is garbage
	//printf("a = %d\n", a);
	//printf("b = %d\n", b);
	
	//printf("*pa = %d\n", *pa);
	//printf("*pb = %d\n", *pb);

	a = 10;
	b = 20;

	pa = &a;
	pb = &b;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	// Use *pa when you want the actual data from address stored at pointer address
	printf("*pa = %d\n", *pa);
	printf("*pb = %d\n", *pb);

	// Printing address using the &a method
	printf("a address = %p\n", &a);
	printf("b address = %p\n", &b);
	// Printing address using the pointer to variable method
	printf("*pa address = %p\n", pa);
	printf("*pb address = %p\n", pb);

	printf("\n");
	
	// A string is an array of chars. Here is one way to define it...	
	char chra[9] = {'f', 'e', 'r', 
					'n', 'a', 'n', 
					'd', 'o', '\0'};

	char chrb[9] = "fernando";

	char *pchra, *pchrb;
	pchra = chra;
	pchrb = chrb;
	
	printf("chra = %s\n", chra);
	printf("chra address = %p\n", &chra);
	printf("size of chra = %ld\n", sizeof(chra));
	printf("base chra address = %p\n", pchra);	
	
	printf("\n");

	printf("chrb = %s\n", chrb);
	printf("chrb address = %p\n", &chrb);
	printf("size of chrb = %ld\n", sizeof(chrb));
	printf("base chrb address = %p\n", pchrb);		

	return 0;
}

