// Mastery Skills Check 3: Sum numbers 1 to 100 with register variables
#include <stdio.h>

// Entry point of the program
int main(void)
{
    register int i, sum = 0;

    for (i = 1; i <= 100; i++) {
        sum += i;
    }

    printf("Sum of 1 to 100: %d\n", sum);

    return 0;
}
