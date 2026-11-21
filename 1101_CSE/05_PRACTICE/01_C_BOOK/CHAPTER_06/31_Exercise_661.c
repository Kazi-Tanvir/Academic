// Exercise 6.6.1: Multiple indirection assignment and printing addresses
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i, *p, **mp;

    p = &i;
    mp = &p;
    **mp = 10;

    printf("&i: %p, p: %p, mp: %p, value: %d\n", (void *)&i, (void *)p, (void *)mp, i);

    return 0;
}
