#include <stdio.h>
#include <stdlib.h>

// Define a new type using typedef
typedef int Length;

int main(int argc, char *argv[])
{
  int myVariable = 42;
  int *myPointer = &myVariable;

  printf("The value of myVariable is %d\n", myVariable);
  printf("The location of myVariable is %p\n", &myVariable);
  
  return 0;
}
