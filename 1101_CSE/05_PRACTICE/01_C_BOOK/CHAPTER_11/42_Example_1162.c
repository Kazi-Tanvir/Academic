// Example 11.6.2: Multiplication and division by 2 via bit shifts
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i = 64;

    printf("%d / 2 = %d\n", i, i >> 1);
    printf("%d * 2 = %d\n", i, i << 1);

    return 0;
}
