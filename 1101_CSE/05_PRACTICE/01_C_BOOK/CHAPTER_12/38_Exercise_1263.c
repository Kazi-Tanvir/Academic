// Exercise 12.6.3: Function pointer array with modulus() operation
#include <stdio.h>

// Returns sum of two integers
int sum(int a, int b) { return a + b; }
// Returns difference of two integers
int subtract(int a, int b) { return a - b; }
// Returns product of two integers
int mul(int a, int b) { return a * b; }
// Returns quotient of two integers
int divide(int a, int b) { return b ? a / b : 0; }
// Returns remainder of integer division
int modulus(int a, int b) { return b ? a % b : 0; }

int (*p[5])(int x, int y) = {
    sum, subtract, mul, divide, modulus
};

// Entry point of the program
int main(void)
{
    int i = 17, j = 5;

    printf("17 + 5 = %d\n", (*p[0])(i, j));
    printf("17 - 5 = %d\n", (*p[1])(i, j));
    printf("17 * 5 = %d\n", (*p[2])(i, j));
    printf("17 / 5 = %d\n", (*p[3])(i, j));
    printf("17 %% 5 = %d\n", (*p[4])(i, j));

    return 0;
}
