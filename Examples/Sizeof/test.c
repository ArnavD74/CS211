#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <fcntl.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{

  int intlen = sizeof(int);
  int floatlen = sizeof(float);
  int charlen = sizeof(char);
  int longintlen = sizeof(long int);
  int unsignedintlen = sizeof(unsigned int);
  int emptystrlen = strlen("");
  printf("int len: %d\n", intlen);
  printf("float len: %d\n", floatlen);
  printf("char len: %d\n", charlen);
  printf("long int len: %d\n", longintlen);
  printf("unsized int len: %d\n", unsignedintlen);
  printf("empty string len: %d\n", emptystrlen); // does not include null terminator

  int *a, b, c; // a-> ptr ; b,c -> ints
  int d = sizeof(a);
  int e = sizeof(b);
  int f = sizeof(c);
  printf("%d\n", d);
  printf("%d\n", e);
  printf("%d\n", f);

  return 0;
}