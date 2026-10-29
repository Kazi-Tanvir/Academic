// Example 1.9.1: Expressions as function arguments
#include <stdio.h>

void sum(int x, int y);

// Calls sum with arithmetic expressions
int main(void)
{
    sum(10 - 2, 9 * 7);

    return 0;
}

// Computes and prints sum of two integers
void sum(int x, int y)
{
    printf("%d ", x + y);
}
