// Example 12.5.2: The ## token concatenation operator
#include <stdio.h>

#define CONCAT(a, b) a ## b

// Entry point of the program
int main(void)
{
    int xy = 100;

    printf("CONCAT(x, y): %d\n", CONCAT(x, y));

    return 0;
}
