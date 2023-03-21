#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <fcntl.h>
#include <ctype.h>
#include <string.h>
// Define a struct named Person
struct Person 
{
  char name[50];
  int age;
  float height;
};

int main()
{
  struct Person person1 = {"Alice", 30, 1.75};

  // Access struct members using the dot operator
  printf("Name: %s\n", person1.name);
  printf("Age: %d\n", person1.age);
  printf("Height: %f\n", person1.height);

  printf("\n");

  struct Person person2 = {"Bob", 60, 2.25};
  struct Person *ptr = &person2;

  // Access struct members using the arrow operator
  printf("Name: %s\n", ptr->name);
  printf("Age: %d\n", ptr->age);
  printf("Height: %f\n", ptr->height);

  return 0;
}
