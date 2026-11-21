// Exercise 12.7.1: Compiling dynamic allocation test
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    int *p = malloc(5 * sizeof(int));
    if (p) {
        p[0] = 100;
        printf("Dynamic int: %d\n", p[0]);
        free(p);
    }

    return 0;
}
