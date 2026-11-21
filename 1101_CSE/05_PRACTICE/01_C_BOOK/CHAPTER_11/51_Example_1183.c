// Example 11.8.3: Compound shift assignment operator <<=
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i = 1;

    i <<= 3; // multiply by 8
    printf("1 <<= 3: %d\n", i);

    return 0;
}
