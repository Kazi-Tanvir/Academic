// Exercise 4.7.2: Fix modulus operation using type cast
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int x;

    // Cast floating point value to int for modulus operator
    x = ((int)123.23) % 3;
    printf("x = %d\n", x);

    return 0;
}
