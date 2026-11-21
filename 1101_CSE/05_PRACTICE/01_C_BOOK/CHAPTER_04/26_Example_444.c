// Example 4.4.4: Local variable initialized with dynamic expression
#include <stdio.h>

void f(int a, int b);

// Entry point of the program
int main(void)
{
    f(3, 4);

    return 0;
}

// Demonstrates local variable initialized by expression
void f(int a, int b)
{
    int sum = a + b;

    printf("Sum is %d\n", sum);
}
