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

  printf("\n");
  char c = 'a';
  int truth = 0;
  truth = ('a' >=  c && c <= 'z');
  printf( "%c is a lower case letter [a-z]\n"
          "truth = %d\n\n",c, truth);
  
  truth = ('A' >=  c && c <= 'Z');
  printf( "%c is not an upper case letter [A-Z]\n"
          "truth = %d\n\n",c, truth);

  truth = ('0' >=  c && c <= '9');
  printf( "%c is not a digit [0-9]\n"
          "truth = %d\n\n",c, truth);

  truth = (c==' ' || c=='\t' || c=='\n');
  printf( "%c is not a whitespace [space, tab, newline]\n"
          "truth = %d\n\n",c, truth);

  /* Problem 2.3 (Bitwise Operations)
   * Consider int val=0xCAFE;
   * C    A    F    E
   * 1100 1010 1111 1110
   *
   * 1. write bitwise operations that do the following:
   *    test if at least 3 of the last 4 LSB are on
   *    0111 7
   *    1011 11
   *    1101 13
   *    1110 14
   * 
   * 2. reverse the byte order (ie 0xFECA)
   * 3. rotate fourbits (ie ECAF)
  */
  int val = 0xCAFE;
  int lastNib = val & 0xF;
  truth = (lastNib == 7 || lastNib > 10);
  printf("val = 0x%04X\n", val);
  printf( "Test: At least 3 of 4 of the LSB are on\n"
          "truth = %d\n\n", truth);
  
  int valTmp = val;
  int lastByte = valTmp & 0xFF;
  lastByte = lastByte << 8; //shifting lastByte to the MSB position
  valTmp = valTmp>>8;       //shifting MSB to LSB position
  valTmp |= lastByte;
  printf( "Byte-swap complete:\n"
          "val = 0x%04X\n"
          "valTmp = 0x%04X\n\n",
          val, valTmp);

  valTmp = (val & 0xFFF0) >> 4; //extracting 0xCAF and shifting right
  lastNib = lastNib << 12;      //shifting 0x000E left 12
  valTmp |= lastNib;            //0x0CAF | 0xE000 = 0xECAF
  printf( "Rotate 4 bits complete:\n"
          "val = 0x%04X\n"
          "valTmp = %04X\n\n",
          val, valTmp);


  /* Problem 2.4 (Operation precedence)
   * Using precedence rules, evaluate the following expressions
   * Assume (x=0xFF33, MASK=0xFF00)
   * Expression: c= x & MASK==0;
   *             c= x & (MASK==0);
   *             c= x & 0;
   *             c= 0
   *             Ans: Precedence is '=='>'&'>'='
   * Assume(x=10, y=2, z=2)
   * Expression: z = y = x++ + ++y * 2;
   *             z = y = (x++) + ((++y) * 2)
   *             z = 10 + (3 * 2), then increment x
   *             z = 17, x = 11, y = 2
   *             ans: Precedence is '++'>'*'>'+'
   * Assume(x=10, y=4, z=1)
   * Expression: y >>= x & 0x2 && z
   *             y >>= (x & 0x2) && z
   *             y >>= 0x2 && z  //remember, if it is not 0, then it is TRUE!!
   *             y >>= 1
   *             y = 2
   *             ans: precedence is '&'>'&&'>'>>='
  */             


  /* Problem 2.5 (Fixing Errors)
   * Using precedence rules, evaluate the following expressions
  
  return 0; // exit (0 => success)
}
