// Exercise 7.1.5: Experimenting with function prototypes and return types
#include <stdio.h>

int multiply(int a, int b);

// Entry point of the program
int main(void)
{
    printf("Product: %d\n", multiply(6, 7));

    return 0;
}

// Multiplies two integers
int multiply(int a, int b)
{
    return a * b;
}
