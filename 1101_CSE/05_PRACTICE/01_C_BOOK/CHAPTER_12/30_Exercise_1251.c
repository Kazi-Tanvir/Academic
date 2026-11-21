// Exercise 12.5.1: Running # and ## operator examples
#include <stdio.h>

#define PRINT_VAR(var) printf(#var " = %d\n", var)

// Entry point of the program
int main(void)
{
    int count = 42;
    PRINT_VAR(count);

    return 0;
}
