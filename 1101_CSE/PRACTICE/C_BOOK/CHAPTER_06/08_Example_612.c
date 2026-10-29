// Example 6.1.2: Importance of pointer base type matching
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int *p;
    double q = 100.23;

    // Properly matching pointer types
    double *dp = &q;
    int temp = 50;
    p = &temp;

    printf("dp points to double: %f, p points to int: %d\n", *dp, *p);

    return 0;
}
