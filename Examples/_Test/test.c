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

    char ascii_values[] = {
        ((6 << 5) | (7 << 2) | (5 >> 1)), 
        ((13 << 4) | (11 >> 1)), 
        ((11 << 4) | (7 << 1) | 1), 
        0
    };
    char *char_array = ascii_values;

    printf("%s", char_array);

    return 0;
}
