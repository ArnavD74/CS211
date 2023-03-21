#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <fcntl.h>
//!!!!!!!!!!!DO NOT FORMAT!!!!!!!!!!!!!
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{

  int a = 10;
  int *ptr1 = &a;
  int* ptr2 = &a; //int * and int* are interchangable
  printf("%d\n", *ptr1); // 10
  printf("%d\n", *ptr2); // 10

  return 0;
}
