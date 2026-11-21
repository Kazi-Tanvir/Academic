// Example 12.6.2: Array of function pointers for arithmetic operations
#include <stdio.h>

// Returns sum of two integers
int sum(int a, int b)
{
    return a + b;
}

// Returns difference of two integers
int subtract(int a, int b)
{
    return a - b;
}

// Returns product of two integers
int mul(int a, int b)
{
    return a * b;
}

// Returns quotient of two integers
int divide(int a, int b)
{
    if (b) return a / b;
    return 0;
}

int (*p[4])(int x, int y) = {
    sum, subtract, mul, divide
};

// Entry point of the program
int main(void)
{
    int i = 10, j = 5;
    int op;

    for (op = 0; op < 4; op++) {
        printf("Operation %d: %d\n", op, (*p[op])(i, j));
    }

    return 0;
}
