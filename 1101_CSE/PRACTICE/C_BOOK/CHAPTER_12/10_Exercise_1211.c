// Exercise 12.1.1: Corrected RANGE macro with parentheses
#include <stdio.h>

#define RANGE(i, min, max) (((i) < (min)) || ((i) > (max)) ? 1 : 0)

// Entry point of the program
int main(void)
{
    printf("15 out of 10-20: %d\n", RANGE(15, 10, 20));
    printf("25 out of 10-20: %d\n", RANGE(25, 10, 20));

    return 0;
}
