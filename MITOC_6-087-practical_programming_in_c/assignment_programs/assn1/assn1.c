/* gcc -g -O0 -Wall hello.c -o hello.o */
#include <stdio.h>

int main(void) // main entry point
{
  const char msg[] = "hello, 6.087 students";

  puts(msg);

  return 0; // exit (0 => success)
}
