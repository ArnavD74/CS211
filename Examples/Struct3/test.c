#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <fcntl.h>
#include <ctype.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

void update_age(struct Person *p) {
    (p->age)++;
}

int main() {
    struct Person john;
    strcpy(john.name, "John");
    john.age = 30;

    printf("%s is %d years old\n", john.name, john.age);

    update_age(&john);

    printf("%s is now %d years old\n", john.name, john.age);

    return 0;
}