// Exercise 4.6.1: Tracing assignment conversions
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;
    char ch;

    i = 1000;
    ch = (char)i;
    i = ch;

    // Displays truncated character value
    printf("%d\n", i);

    return 0;
}
