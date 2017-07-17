/* gcc -g -O0 -Wall assn2.c -o assn2.o */
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) // main entry point
{
  printf( "SizeOf(char) = %ld\n"
          "CHAR_MIN = %d\n"
          "CHAR_MAX = %d\n\n",
          sizeof(char),
          CHAR_MIN,
          CHAR_MAX);

  printf( "SizeOf(unsigned char) = %ld\n"
          "UCHAR_MAX = %d\n\n",
          sizeof(unsigned char),
          UCHAR_MAX);

  printf( "SizeOf(short) = %ld\n"
          "SHRT_MIN = %d\n"
          "SHRT_MAX = %d\n\n",
          sizeof(short),
          SHRT_MIN,
          SHRT_MAX);

  printf( "SizeOf(int) = %ld\n"
          "INT_MIN = %d\n"
          "INT_MAX = %d\n\n",
          sizeof(int),
          INT_MIN,
          INT_MAX);

  printf( "SizeOf(unsigned int) = %ld\n"
          "UINT_MAX = %u\n\n",
          sizeof(unsigned int),
          UINT_MAX);

  printf( "SizeOf(unsigned long) = %ld\n"
          "ULONG_MAX = %lu\n\n",
          sizeof(unsigned long),
          ULONG_MAX);

  printf( "SizeOf(float) = %ld\n"
          "FLT_MIN = %e\n"
          "FLT_MAX = %e\n",
          sizeof(float),
          FLT_MIN,
          FLT_MAX);

  return 0; // exit (0 => success)
}
