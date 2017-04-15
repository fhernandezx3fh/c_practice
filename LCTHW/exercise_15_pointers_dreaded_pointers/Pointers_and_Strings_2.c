#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
  printf("\n-----\n");
  
  int i = 0;
  int j = 0;
  // *my_name is a pointer to a string 
  char *my_name = "Fernando";

  // *names[] is a pointer to an array or pointers to strings
  char *names[] = { "Fernando",
                    "Sherry",
                    "Sofia",
                    "Hayley",
                    "kjhsdfkAJSFHASHFJAS FJ r39ruw fafioasifo"};

  int sizeOfNames = sizeof(names) / sizeof(names[0]);

  printf("size of the pointer *my_name = %d\n", sizeof(my_name));
  printf("size of array of pointers *names[] = %d\n", sizeof(names));
  printf("\n-----\n");
  
  printf("address of my_name = %p\n", &my_name);
  printf("address of names[] = %p\n", &names);
  
  printf("-----\n");

  for(i=0; i<sizeOfNames; i++)
  {
    printf( "names[%d] string = %s\n"                       \
            "         address of pointer to string = %p\n"  \
            "         content of pointer to string = %p\n"  \
            "         size = %d\n",                         \
            i, names[i],                                    \
            &names[i],                                      \
            &(*names[i]),                                   \
            strlen(names[i]));

    for(j=0; j<strlen(names[i])+1; j++) 
    {
      printf("Address of Name[%d] ch[%d]: %p\n",              \
              i, j, &(*names[i])+j);
    }
  printf("\n");
  }

  return 0;
}

