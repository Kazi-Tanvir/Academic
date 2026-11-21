// Exercise 2.5.1: Previous for loop exercises using increment operator
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for(i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for(i = 17; i <= 100; i++) {
        if((i % 17) == 0) printf("%d ", i);
    }
    printf("\n");

    return 0;
}
