// Example 11.7.1: Demonstrating the ? ternary operator
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int val = 15;
    int is_pos;

    is_pos = val > 0 ? 1 : 0;
    printf("is_pos: %d\n", is_pos);

    return 0;
}
