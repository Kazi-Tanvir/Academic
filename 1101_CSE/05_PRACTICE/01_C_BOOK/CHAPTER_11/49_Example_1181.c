// Example 11.8.1: Multiple assignment statement
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int a, b, c;

    a = b = c = 100;
    printf("a: %d, b: %d, c: %d\n", a, b, c);

    return 0;
}
