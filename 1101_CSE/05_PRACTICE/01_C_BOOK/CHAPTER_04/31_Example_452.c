// Example 4.5.2: Automatic integral promotion of short to int
#include <stdio.h>

// Entry point of the program
int main(void)
{
    short int a = 10, b = 20;
    int c;

    // a and b promoted to int during evaluation
    c = a + b;
    printf("%d\n", c);

    return 0;
}
