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

  int a[] = {1, 2, 3, 4, 5};
  int b[] = {*a, *a+1, *a+2};
  int *ptr = b;

  int zero = b[0];
  //  int one = *(a[0] + sizeof(int));
  int one = *b + 1;

  printf("%d\n", zero);
  printf("%d\n", one);

  return 0;
}