// Example 7.5.1: Traditional K&R function declaration syntax
#include <stdio.h>

// Calculates the area of a rectangle
int area(len, width)
int len, width;
{
    return len * width;
}

// Entry point of the program
int main(void)
{
    printf("Area: %d\n", area(4, 5));

    return 0;
}
