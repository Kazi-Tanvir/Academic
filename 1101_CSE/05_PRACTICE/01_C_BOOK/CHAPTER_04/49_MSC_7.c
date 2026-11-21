// Mastery Skills Check 7: Pseudorandom series() function using global variable
#include <stdio.h>

int series(void);

int seed = 21;

// Entry point of the program
int main(void)
{
    int i;

    for(i = 0; i < 10; i++) {
        printf("%d ", series());
    }
    printf("\n");

    return 0;
}

// Generates next number in the pseudorandom series
int series(void)
{
    seed = (seed * 1468) % 467;
    return seed;
}
