// Exercise 3.8.1: Print odd numbers 1 to 100 using continue
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for(i = 1; i <= 100; i++) {
        if((i % 2) == 0) continue;
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
