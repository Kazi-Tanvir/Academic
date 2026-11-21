// Exercise 11.6.2: Circular bit rotate function
#include <stdio.h>

// Rotates an 8-bit unsigned char left by 1 bit
unsigned char rot_left(unsigned char val)
{
    unsigned char high_bit = (val & 0x80) ? 1 : 0;
    return (unsigned char)((val << 1) | high_bit);
}

// Entry point of the program
int main(void)
{
    unsigned char b = 0x85; // 1000 0101
    printf("Before rotate: 0x%02X\n", b);
    b = rot_left(b);
    printf("After rotate:  0x%02X\n", b);

    return 0;
}
