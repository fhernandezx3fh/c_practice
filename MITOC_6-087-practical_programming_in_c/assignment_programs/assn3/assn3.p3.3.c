#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int factorial(int n)
{
  int i, ret = 1;
  for(i=2; i<=n; i++)
    ret *=i;
  return ret;
}

/* rewritten to use a while loop */
int factorial_2(int n)
{
  int ret=1;
  while(n>=1)
  {
    ret*=n;
    n--;
  }
  return ret;
}

double rand_double()
{
  /* generate random number in [0,1) */

  time_t t;

  /* Initializes random number generator */
  srand((unsigned) time(&t));

  double ret = (double)rand();
  ret /= (RAND_MAX);
  return ret;
}

int sample_geometric_rv(double p)
{
  double q;
  int n=0;
  do
  {
    q = rand_double();
    printf("q = %f\n", q);
    n++;
  } while (q>=p);
  return n;
}

/* rewritten to use a while loop */
int sample_geometric_rv_2(double p)
{
  double q = rand_double();
  int n=1;
  while(q>=p)
  {
    q = rand_double();
    printf("q = %f\n", q);
    n++;
  }
  return n;
}

/* another way to rewrite */
int sample_geometric_rv_3(double p)
{
  double q;
  int n=0, condition=1;
  while(condition)
  {
    q = rand_double();
    printf("q = %f\n", q);
    n++;
    condition = q >= p;
  }
  return n;
}

int main()
{
  printf("factorial: %d\n", factorial(3));
  printf("factorial 2: %d\n", factorial_2(3));
 
  printf("geometric: %d\n", sample_geometric_rv(0.5));
  printf("geometric 2: %d\n", sample_geometric_rv_2(0.5));
  printf("geometric 3: %d\n", sample_geometric_rv_3(0.5));
  return 0;
}
