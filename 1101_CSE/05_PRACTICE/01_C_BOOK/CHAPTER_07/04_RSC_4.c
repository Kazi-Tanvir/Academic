// Review Skills Check 4: Assign float value using pointer
#include <stdio.h>

// Entry point of the program
int main(void)
{
    double d, *p;

    p = &d;
    *p = 100.99;

    printf("%f\n", d);

    return 0;
}
