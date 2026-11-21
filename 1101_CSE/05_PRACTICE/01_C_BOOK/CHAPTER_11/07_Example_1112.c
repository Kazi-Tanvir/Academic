// Example 11.1.2: Register variables in separate functions
#include <stdio.h>

// First helper function demonstrating register variables
void f(void)
{
    register int i, j;
    i = 10;
    j = 20;
    printf("f: %d %d\n", i, j);
}

// Second helper function demonstrating register variables
void f2(void)
{
    register int j, k;
    j = 30;
    k = 40;
    printf("f2: %d %d\n", j, k);
}

// Entry point of the program
int main(void)
{
    register int a, b;
    a = 1;
    b = 2;
    printf("main: %d %d\n", a, b);

    f();
    f2();

    return 0;
}
