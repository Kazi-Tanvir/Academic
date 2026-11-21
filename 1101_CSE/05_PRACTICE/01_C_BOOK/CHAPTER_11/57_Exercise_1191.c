// Exercise 11.9.1: Comma operator maintaining three loop variables
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i, j, k;

    for (i = 0, j = -50, k = i + j; i < 5; i++, j++, k = i + j) {
        printf("k = %d\n", k);
    }

    return 0;
}
