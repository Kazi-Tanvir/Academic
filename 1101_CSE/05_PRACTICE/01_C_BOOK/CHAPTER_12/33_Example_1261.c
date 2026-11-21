// Example 12.6.1: Calling a function using a function pointer
#include <stdio.h>

// Returns sum of two integers
int sum(int a, int b)
{
    return a + b;
}

// Entry point of the program
int main(void)
{
    int (*p)(int a, int b);
    int result;

    p = sum;
    result = (*p)(10, 20);
    printf("Result: %d\n", result);

    return 0;
}
