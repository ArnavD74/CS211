#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));  // initialize the random number generator, using the current time as the seed

    int i = rand() % 100 + 1;

    printf("%d\n", i);

    return 0;
}