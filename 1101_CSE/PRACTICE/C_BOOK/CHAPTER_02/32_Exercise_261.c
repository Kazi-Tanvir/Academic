// Exercise 2.6.1: Table of numbers, squares, and cubes from 1 to 10
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}
