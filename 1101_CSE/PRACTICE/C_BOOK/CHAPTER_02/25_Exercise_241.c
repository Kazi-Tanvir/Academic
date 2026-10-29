// Exercise 2.4.1: Print numbers from 1 to 100
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for(i = 1; i <= 100; i = i + 1) {
        printf("%d ", i);
    }

    return 0;
}
