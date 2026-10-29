// Cumulative Skills Check 3: Rewrite 2D array reference count[44][8] with pointer
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int count[50][10];

    // Pointer arithmetic equivalent of count[44][8] = 99;
    *((int *)count + (44 * 10) + 8) = 99;

    printf("count[44][8]: %d\n", count[44][8]);

    return 0;
}
