/* 	If you don't include this, you will get a warning on compile time 
	for the use of puts */
#include <stdio.h>

int main(int argc, char *argv[])
{
	puts("Hello world.");
	
	return 0;
}

/* How To Break It
	Running with all compiler warnings on

$ rm ex1
$ CFLAGS="-Wall" make ex1
cc -Wall    ex1.c   -o ex1
ex1.c: In function 'main':
ex1.c:3: warning: implicit declaration of function 'puts'
$ ./ex1
Hello world.
$

*/
