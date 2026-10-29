// Mastery Skills Check 8: Dynamically allocate memory for one double
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    double *p;

    p = malloc(sizeof(double));
    if (!p) {
        printf("Allocation Error\n");
        exit(1);
    }

    *p = 99.99;
    printf("Allocated double: %f\n", *p);
    free(p);

    return 0;
}
