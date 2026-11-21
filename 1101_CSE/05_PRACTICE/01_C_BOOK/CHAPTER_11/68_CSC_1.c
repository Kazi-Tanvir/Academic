// Cumulative Skills Check 1: Swap low-order and high-order nibbles of a byte
#include <stdio.h>

// Displays 8-bit binary representation of a byte
void show_binary(unsigned char u)
{
    int t;
    for (t = 128; t > 0; t /= 2) {
        if (u & t) printf("1");
        else printf("0");
    }
    printf("\n");
}

// Entry point of the program
int main(void)
{
    unsigned char ch = 0xF2; // 1111 0010
    unsigned char swapped;

    printf("Original: 0x%02X (", ch);
    show_binary(ch);
    printf(")\n");

    swapped = (unsigned char)((ch << 4) | (ch >> 4));

    printf("Swapped:  0x%02X (", swapped);
    show_binary(swapped);
    printf(")\n");

    return 0;
}
