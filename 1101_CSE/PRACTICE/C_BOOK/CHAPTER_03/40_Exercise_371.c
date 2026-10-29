// Exercise 3.7.1: Demonstrating break in a loop
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for(i = 1; i <= 50; i++) {
        if(i == 25) break;
        printf("%d ", i);
    }
    printf("\nLoop stopped at break.\n");

    return 0;
}
