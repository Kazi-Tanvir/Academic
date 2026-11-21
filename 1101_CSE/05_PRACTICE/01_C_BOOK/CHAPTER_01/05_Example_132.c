// Example 1.3.2: Declaring and printing char, float, and double variables
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch;
    float f;
    double d;

    ch = 'X';
    f = 100.123f;
    d = 123.009;

    printf("ch is %c, ", ch);
    printf("f is %f, ", f);
    printf("d is %f", d);

    return 0;
}
