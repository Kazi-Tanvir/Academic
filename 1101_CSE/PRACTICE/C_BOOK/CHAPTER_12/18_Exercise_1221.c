// Exercise 12.2.1: Conditional compilation selecting INT or FLOAT power routine
#include <stdio.h>

#define INT 0
#define FLOAT 1
#define PWR_TYPE INT

// Entry point of the program
int main(void)
{
#if PWR_TYPE == FLOAT
    double base = 2.5, result = 1.0;
#elif PWR_TYPE == INT
    int base = 2, result = 1;
#endif
    int e = 3, i;

    for (i = 0; i < e; i++) {
        result *= base;
    }

#if PWR_TYPE == FLOAT
    printf("Result (float): %f\n", result);
#else
    printf("Result (int): %d\n", result);
#endif

    return 0;
}
