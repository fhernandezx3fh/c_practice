/* gcc -g -O0 -Wall assn2.c -o assn2.o */
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) // main entry point
{
  /* Problem 2.1
   * Determine the size, min, and max value of char, unsigned char
   * short, int, unsigned int, unsigned long, and float data types.
   * Indicate whether machine is 32 or 64 bit
   *
   * 64 bit machine
   */

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

  /* Problem 2.2 (Character Literals)
   * Write logical expressions that tests whether a given character
   * variable, c, is:
   * lowercase letter
   * upper case letter
   * digit
   * white space (includes space, tab, newline)
   */

  char c = 'a';
  int truth = 0;
  truth = ('a' >=  c && c <= 'z');
  printf("%d\n", truth);
  
  truth = ('A' >=  c && c <= 'Z');
  printf("%d\n", truth);

  truth = ('0' >=  c && c <= '9');
  printf("%d\n", truth);

  truth = (c==' ' || c=='\t' || c=='\n');
  printf("%d\n", truth);

  /* Problem 2.3 (Bitwise Operations)
   * Consider int val=0xCAFE;
   * 1100 1010 1111 1110
   * write bitwise operations that do the following:
   * test if at least 3 of the last 4 LSB are on
   * reverse the byte order (ie 0xFECA)
   * rotate fourbits (ie ECAF)
  */
  int val = 0xCAFE;
  int lastByte = val & 0x7;
  printf("%d\n", lastByte);

  return 0; // exit (0 => success)
}
