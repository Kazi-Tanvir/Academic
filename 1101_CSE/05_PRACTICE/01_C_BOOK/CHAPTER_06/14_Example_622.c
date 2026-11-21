// Example 6.2.2: Parentheses with *p++ vs (*p)++
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int *p, q = 10;

    p = &q;

    // (*p)++ increments value pointed to
    (*p)++;
    printf("q is now %d\n", q);

    return 0;
}
