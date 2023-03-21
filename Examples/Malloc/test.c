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

int *ptr;
ptr = (int *) malloc(sizeof(int));
*ptr = 42;
printf("The value of ptr is %d\n", *ptr);
free(ptr);


  return 0;
}