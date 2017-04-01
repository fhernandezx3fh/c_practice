#include <stdio.h>

//printf("%s has %d years alive.\n",names[i], ages[i]);

int main(int argc, char *argv[])
{
	int a = 5;
	int b = 10;
	int c;
	float flta = 3.1456;	
	char name[25] = "fernando";
	char place[] = "anywhere";
		
// Create pointers and assign them the address of the data
	int *ptra = &a;
	int *ptrb = &b;
	int *ptrc = &c;
	float *ptrflta = &flta;
	char *ptrname = &name;
	char *ptrplace = &place;


// Print address, sizes, and value of variables
// Remember to use %p format sequence when using an address or pointer
// Remember to use %ld for sizeof()
// We used the & operator to list the address here

	printf("a address: %p\ta value: %d\t\tSize of a:%ld \n", &a, a, sizeof(a));
	printf("b address: %p\tb value: %d\t\tSize of b:%ld \n", &b, b, sizeof(b));
	printf("c address: %p\tc value: %d\t\tSize of c:%ld \n", &c, c, sizeof(c));
	printf("flta address: %p\tflta value: %f\tSize of flta:%ld \n", &flta, flta, sizeof(flta));
	printf("name address: %p\tname value: %s\tSize of name:%ld \n", &name, name, sizeof(name));
	printf("place address: %p\tplace value: %s\tSize of place:%ld \n", &place, place, sizeof(place));
	
	printf("\n");

	printf("a address: %p\ta value: %d\t\tSize of a:%ld \n", ptra, *ptra, sizeof(*ptra));
	printf("b address: %p\tb value: %d\t\tSize of b:%ld \n", ptrb, *ptrb, sizeof(*ptrb));
	printf("c address: %p\tc value: %d\t\tSize of c:%ld \n", ptrc, *ptrc, sizeof(*ptrc));
	
	
	return 0;
}

