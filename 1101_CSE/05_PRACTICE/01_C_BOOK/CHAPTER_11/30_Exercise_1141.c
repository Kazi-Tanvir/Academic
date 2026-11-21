// Exercise 11.4.1: typedef UL for unsigned long
#include <stdio.h>

typedef unsigned long UL;

// Entry point of the program
int main(void)
{
    UL count = 312323UL;
    printf("UL count: %lu\n", count);

    return 0;
}
