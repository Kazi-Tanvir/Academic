// Example 12.1.1: Function-like parameterized macro MAX()
#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Entry point of the program
int main(void)
{
    printf("Max of 10 and 20: %d\n", MAX(10, 20));

    return 0;
}
