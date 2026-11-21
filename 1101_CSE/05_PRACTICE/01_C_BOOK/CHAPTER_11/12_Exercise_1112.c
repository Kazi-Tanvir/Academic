// Exercise 11.1.2: sum_it() maintains running total using local static variable
#include <stdio.h>

// Maintains and displays a running total of parameters
void sum_it(int value)
{
    static int total = 0;
    total += value;
    printf("Running total: %d\n", total);
}

// Entry point of the program
int main(void)
{
    sum_it(3);
    sum_it(6);
    sum_it(4);

    return 0;
}
