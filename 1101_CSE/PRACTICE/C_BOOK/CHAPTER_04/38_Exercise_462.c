// Exercise 4.6.2: Tracing double to float truncation
#include <stdio.h>

// Entry point of the program
int main(void)
{
    double d;
    float f;

    d = 10.0 / 3.0;
    f = (float)d;

    printf("%f\n", f);

    return 0;
}
