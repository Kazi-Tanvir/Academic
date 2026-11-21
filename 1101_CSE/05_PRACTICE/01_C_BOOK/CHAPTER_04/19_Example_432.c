// Example 4.3.2: Explicit constant type suffixes
#include <stdio.h>

// Entry point of the program
int main(void)
{
    float f = 10.1F;
    long int li = 100000L;
    unsigned int ui = 100U;

    printf("%f %ld %u\n", f, li, ui);

    return 0;
}
