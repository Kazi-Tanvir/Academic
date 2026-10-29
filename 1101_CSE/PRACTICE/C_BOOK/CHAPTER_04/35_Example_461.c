// Example 4.6.1: Truncation when converting float to int in assignment
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;
    float f;

    f = 123.456f;
    i = (int)f;

    printf("%f %d\n", f, i);

    return 0;
}
