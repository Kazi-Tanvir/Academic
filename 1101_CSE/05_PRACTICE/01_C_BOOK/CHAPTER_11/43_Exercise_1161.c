// Exercise 11.6.1: Multiply and divide numbers using shift operators
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i = 25;

    printf("Original: %d\n", i);
    printf("Doubled:  %d\n", i << 1);
    printf("Halved:   %d\n", i >> 1);

    return 0;
}
