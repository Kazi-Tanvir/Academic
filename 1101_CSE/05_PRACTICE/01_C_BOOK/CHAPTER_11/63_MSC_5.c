// Mastery Skills Check 5: Compare corresponding bits of two characters using XOR
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char c1 = 'A';
    char c2 = 'B';
    unsigned char diff;

    diff = (unsigned char)(c1 ^ c2);

    printf("c1: '%c' (0x%02X), c2: '%c' (0x%02X)\n", c1, c1, c2, c2);
    printf("Bit differences (c1 ^ c2): 0x%02X\n", diff);

    return 0;
}
