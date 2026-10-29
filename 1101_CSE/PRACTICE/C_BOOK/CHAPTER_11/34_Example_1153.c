// Example 11.5.3: Bitwise OR to set bits
#include <stdio.h>

// Entry point of the program
int main(void)
{
    unsigned char ch = 0;

    // Set bit 0, 3, and 5
    ch = ch | 1;
    ch = ch | 8;
    ch = ch | 32;

    printf("Value with bits set: %u\n", ch);

    return 0;
}
