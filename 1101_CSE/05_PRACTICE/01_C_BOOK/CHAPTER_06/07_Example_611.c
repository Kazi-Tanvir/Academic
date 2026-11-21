// Example 6.1.1: Pointer assignment and dereferencing
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int *p, q;

    q = 100;
    p = &q;

    printf("%d\n", *p);

    return 0;
}
