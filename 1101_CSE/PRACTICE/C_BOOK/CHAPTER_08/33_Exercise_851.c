// Exercise 8.5.1: Table of numbers, squares, and cubes left-justified
#include <stdio.h>

// Entry point of the program
int main(void)
{
    unsigned long i;

    for (i = 2; i <= 100; i++) {
        printf("%-10lu %-10lu %-10lu\n", i, i * i, i * i * i);
    }

    return 0;
}
