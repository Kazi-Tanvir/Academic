// Example 8.5.1: Precision specifier with printf()
#include <stdio.h>

// Entry point of the program
int main(void)
{
    printf("%.5d\n", 10);
    printf("$%.2f\n", 99.95);
    printf("%.10s\n", "Not all of this will be printed");

    return 0;
}
