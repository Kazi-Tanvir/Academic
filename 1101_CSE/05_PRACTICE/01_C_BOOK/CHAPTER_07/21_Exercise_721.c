// Exercise 7.2.1: Recursive factorial of 5
#include <stdio.h>

int fact(int i);

// Entry point of the program
int main(void)
{
    printf("5 factorial is %d\n", fact(5));

    return 0;
}

// Computes factorial
int fact(int i)
{
    if(i == 1) return 1;
    return i * fact(i - 1);
}
