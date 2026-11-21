// Example 4.7.1: Explicit type cast
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i = 10;
    float f;

    f = (float)i / 4.0f;
    printf("%f\n", f);

    return 0;
}
