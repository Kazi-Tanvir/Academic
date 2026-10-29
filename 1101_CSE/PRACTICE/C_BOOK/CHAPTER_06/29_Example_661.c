// Example 6.6.1: Multiple indirection with pointer to pointer
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int val = 10;
    int *p = &val;
    int **mp = &p;

    printf("val: %d, *p: %d, **mp: %d\n", val, *p, **mp);

    return 0;
}
