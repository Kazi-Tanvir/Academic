// Exercise 12.1.2: Parameterized macro ABS() to compute absolute value
#include <stdio.h>

#define ABS(i) ((i) < 0 ? -(i) : (i))

// Entry point of the program
int main(void)
{
    printf("%d %d\n", ABS(-1), ABS(1));

    return 0;
}
