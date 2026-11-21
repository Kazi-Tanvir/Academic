// Exercise 11.8.1: Proving multiple assignment assigns all variables
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int x, y, z;

    x = y = z = 42;
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
