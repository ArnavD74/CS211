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

  //signed char range is -128 to 127
  signed char a = 100;
  signed char b = 50;
  signed char c = a + b;

  //signed int range is -2147483648 to 2147483647
  signed int d = 100;
  signed int e = 50;
  signed int f = d + e;

  printf("%d\n", c);
  printf("%d\n", f);

  return 0;
}