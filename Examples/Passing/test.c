#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <fcntl.h>
#include <ctype.h>
#include <string.h>

void increment(int *num) {
    (*num)++;
}

int main() {
    int x = 10;
    increment(&x);
    printf("%d\n", x);  // Output: 10
    return 0;
}