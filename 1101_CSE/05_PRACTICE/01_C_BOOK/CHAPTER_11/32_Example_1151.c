// Example 11.5.1: Bitwise XOR operation
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int a = 12;
    int b = 10;
    int c;

    c = a ^ b;
    printf("a ^ b = %d\n", c);
    printf("c ^ b = %d\n", c ^ b);

    return 0;
}
