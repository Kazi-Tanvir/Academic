// Exercise 7.5.1: Feet to meters using old-style declaration
#include <stdio.h>

// Converts feet to meters using old-style declaration
double f_to_m(f)
double f;
{
    return f / 3.28;
}

// Entry point of the program
int main(void)
{
    double feet = 10.0;

    printf("Meters: %f\n", f_to_m(feet));

    return 0;
}
