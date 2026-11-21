// Example 11.9.2: Comma operator in expression
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int x, y;

    y = (x = 5, x * 2);
    printf("y: %d\n", y);

    return 0;
}
