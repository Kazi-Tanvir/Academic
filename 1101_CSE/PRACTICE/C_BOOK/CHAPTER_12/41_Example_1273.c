// Example 12.7.3: Estimating free memory using malloc()
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    char *p;
    long l = 0;
    int limit = 1000;

    // Allocate chunks to measure available memory (bounded for safety)
    while (limit > 0 && (p = malloc(10000)) != NULL) {
        l += 10000;
        limit--;
    }

    printf("Sampled at least %ld bytes of free heap memory.\n", l);

    return 0;
}
