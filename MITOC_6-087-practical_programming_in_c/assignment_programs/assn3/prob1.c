#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define NMAX 25
static unsigned int results_buffer[NMAX];

void fibonacci()
{
	/* Problem 3.1 Code profiling and registers
   * a) Get a baseline without any declared registers.
   *    Compile and run proc1.c
   *    Do not use debugger. This impacts execution time
   *    Do not optimize.
   *    gcc -O0 -Wall prob1.c -o prob1.o
   *
   *    How long does a single iteration take to 
   *    execute (on average)?
   *    Avg. execution time: 8.4e-05 msec
   *
   *    b) Now, modify the fibonacci() function by making the 
   *    variables a, b, and c register variables.
   *    Recompile and run the code. 
   *    How long does a single iteration take now, on average?
   *    Avg. execution time: 4.5e-05 msec
   *
   *    c) Modify the fibonacci() function one more time by 
   *    making the variable n also a register
   *    variable. Recompile and run the code once more. 
   *    How long does a single iteration take with
   *    all four variables as register variables?
   *    Avg. execution time: 1.7e-05 msec
   *
   *    d) Comment on your observed results. 
   *    What can you conclude about using registers in your
   *    code?
   *    
   *    Using registers to store and compute on variables
   *    on variables a, b, and c increased performance by
   *    a factor of 1.8.
   *
   *    Using registers to store and compute on variables
   *    on variables a, b, c, and n increased performance by
   *    a factor of 4.9.
   *
   *    */
  
  /* here are the variables to set as registers
	unsigned int a = 0;
	unsigned int b = 1;
	unsigned int c;
	int n;*/

	/* here are the variables to set as registers */
	register unsigned int a = 0;
	register unsigned int b = 1;
	register unsigned int c;
	int n;

	/* do not edit below this line */
	results_buffer[0] = a;
	results_buffer[1] = b;
	for (n = 2; n < NMAX; n++) {
		c = a + b;
		results_buffer[n] = c; /* store code in results buffer */
		a = b;
		b = c;
	}
}

int main(void) {
	
	int n, ntests = 10000000;
	clock_t tstart, tend;
	double favg;

	/* do profiling */
	tstart = clock();
	
	for (n = 0; n < ntests; n++)
		fibonacci();

	tend = clock();
	/* end profiling */

	/* compute average execution time */
	favg = ((double)(tend - tstart))/CLOCKS_PER_SEC/ntests;

	/* print avg execution time in milliseconds */
	printf("Avg. execution time: %g msec\n",favg*1000);
	return 0;
}
