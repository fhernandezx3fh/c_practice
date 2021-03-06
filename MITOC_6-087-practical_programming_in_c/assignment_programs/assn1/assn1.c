/* gcc -g -O0 -Wall hello.c -o hello.o 
 * gdb <object/executable>
 * run
 */
#include <stdio.h>

int main(void) // main entry point
{
  /* Problem 1.1b (Constants and Literals)
   * Describe the differece between the literals
   * 7    - Integer literal
   * "7"  - Null terminated string literal
   * '7'  - Character literal
   */
  int intLiteral    = 7;
  char *strLiteral  = "7";
  char chrLiteral   = '7';
  
  printf( "intLiteral   = %i\n"\
          "*strLiteral  = %s\n"\
          "chrLiteral   = %c\n",\
          intLiteral, strLiteral, chrLiteral);
  /* Other integer literals
   * 85   - decimal
   * 0123 - octal
   * 0x4b - hex
   * 30   - int
   * 30u  - unsigned int
   * 30l  - long
   * 30ul - unsigned long
   */

  /* Problem 1.1c (Operation order)
   * double ans = 10.0+2.0/3.0−2.0∗2.0;
   * rewrite using parens so that ans = 11
   */
  double ans = 10.0+2.0/3.0-2.0*2.0;
  printf("10.0+2.0/3.0−2.0∗2.0 = %f\n", ans);

  ans = 10.0+2.0/((3.0-2.0)*2.0);
  printf("10.0+2.0/((3.0−2.0)∗2.0) = %f\n", ans);

  
  /* Problem 1.2 (Macros)
   * double ans2 = 18.0/squared(2+1);
   */
  #define squared(x)  x*x
  //#define squared(x)  (x*x)
  //#define squared(x)  (x)*(x)
  //#define squared(x)  ((x)*(x))
  double ans2 = 18.0/squared(2+1);
  printf("18.0/squared(2+1) = %f\n", ans2);

  /* Problem 1.3 (Printing)
   */
  const char msg[] = "hello, 6.087 students";
  puts(msg);


  /* Problem 1.4 (Code Arrangement)
   * Re-order as needed
   * 1. return 0;
   * 2. const char msg[] = MSG1;
   * 3. }
   * 4. #define MSG1 "All your base are belong to us!"
   * 5. int main(void) {
   * 6. #include <stdio.h>
   * 7. puts(msg);
   *
   * 1. #include <stdio.h>
   * 2. #define MSG1 "All your base are belong to us!"
   * 3. int main(void) {
   * 4. const char msg[] = MSG1;
   * 5. puts(msg);
   * 6. return 0;
   * 7. }
   */

  /* Problem 1.3 (Printing)
   * (a) #include <stdio.h>; Remove ;
   * (b) int function(void arg1) Change void to int
   *      {
   *        return arg1-1;
   *      }
   * (c) #define MESSAGE = "Happy new year!" Remove =
   * puts(MESSAGE);
   */

  return 0; // exit (0 => success)
}
