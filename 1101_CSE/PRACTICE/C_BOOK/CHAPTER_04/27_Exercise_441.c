// Exercise 4.4.1: Initialize int i to 100 and count down to 1
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i = 100;

    for(; i > 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
