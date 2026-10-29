// Exercise 12.4.1: Displaying compilation environment using built-in macros
#include <stdio.h>

// Entry point of the program
int main(void)
{
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);
    printf("Source file: %s, line: %d\n", __FILE__, __LINE__);

    return 0;
}
