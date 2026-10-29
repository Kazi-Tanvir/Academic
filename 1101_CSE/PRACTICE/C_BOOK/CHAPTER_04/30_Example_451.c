// Example 4.5.1: Automatic type conversion in expressions
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i = 10;
    float f = 23.25f;

    // i is elevated to float
    printf("%f\n", i * f);

    return 0;
}
