// Example 10.2.1: Pointers to structures and the arrow operator
#include <stdio.h>

struct s_type {
    int a;
    int b;
} s, *p;

// Entry point of the program
int main(void)
{
    p = &s;

    p->a = 10;
    p->b = 20;

    printf("%d %d\n", p->a, p->b);

    return 0;
}
