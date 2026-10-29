// Example 7.2.2: Recursive factorial calculation
#include <stdio.h>

int fact(int n);

// Entry point of the program
int main(void)
{
    printf("5! = %d\n", fact(5));

    return 0;
}

// Computes factorial recursively
int fact(int n)
{
    if(n <= 1) return 1;
    return n * fact(n - 1);
}
