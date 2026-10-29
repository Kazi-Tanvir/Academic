// Example 11.5.5: 1's complement operator ~
#include <stdio.h>

// Entry point of the program
int main(void)
{
    unsigned char ch = 0xAA;
    unsigned char comp = (unsigned char)~ch;

    printf("Original: 0x%02X, Complement: 0x%02X\n", ch, comp);

    return 0;
}
