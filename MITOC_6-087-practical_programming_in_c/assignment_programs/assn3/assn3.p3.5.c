#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRSIZE 100
#define NFIELDS 9
int main()
{
  FILE*   fp=NULL;
  char*   fileName="stateoutflow0708.txt";
  char    currentLine[STRSIZE];
  char    field1[STRSIZE];
  char    field2[STRSIZE];
  char    field3[STRSIZE];
  char    field4[STRSIZE];
  char    field5[STRSIZE];
  char    field6[STRSIZE];
  char    field7[STRSIZE];
  char    field8[STRSIZE];
  char    field9[STRSIZE];

  fp = fopen(fileName, "r");
  
  while(fscanf(fp,  "%s %s %s %s %s %s %s %s %s", \
                    field1, field2, field3,       \
                    field4, field5, field6,       \
                    field7, field8, field9)==9)
  {
    printf(         "%s %s %s %s %s %s %s %s %s\n",
                    field1, field2, field3,       \
                    field4, field5, field6,       \
                    field7, field8, field9);
  }
  //printf("%s %s %s %s %s %s %s %s %s\n", field1, field2, field3,field4, field5, field6,field7, field8, field9);

  fclose(fp);
  return 0;
}
