#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;  // number of elements
    int *arr;  // array pointer
    srand(time(NULL));

    // get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));     // allocate memory for the array


    for (int i = 0; i < n; i++) {     // fill the array
        arr[i] = rand() % 100 + 1;
    }

    // array printing
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}