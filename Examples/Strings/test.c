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

  char str[] = "Hello world!";
  int len =  strlen(str);
  printf("Length: %d\n", len);

  char str2[len];

  strcpy(str2, str);
  printf("strcpy: %s\n", str2);

  // strcat(str2, str);
  printf("strcat: %s\n", str2);


  int cmp = strcmp(str, str2);
  if(cmp == 0) {
    printf("str1 is equal to str2\n");
    // printf("%d\n", cmp);
  } else {
    printf("str1 is not equal to str2\n");
    // printf("%d\n", cmp);
  }

  size_t size = sizeof(str);
  printf("Size: %ld\n", size); //size is length + 1 for null terminator



  return 0;
}
