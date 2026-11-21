// Exercise 8.4.1: Comparing puts() vs printf() output
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80] = "Demonstrating string output";

    printf("Using puts():\n");
    puts(str);

    printf("Using printf():\n");
    printf("%s\n", str);

    return 0;
}
