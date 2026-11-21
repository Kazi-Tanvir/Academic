// Example 12.7.1: Checking return value of malloc()
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    int *p;

    p = malloc(100 * sizeof(int));
    if (!p) {
        printf("Allocation Error\n");
        exit(1);
    }

    printf("Memory allocated successfully.\n");
    free(p);

    return 0;
}
