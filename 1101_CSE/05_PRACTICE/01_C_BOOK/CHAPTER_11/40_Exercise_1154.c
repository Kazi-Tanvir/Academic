// Exercise 11.5.4: Check and clear parity bit (8th bit)
#include <stdio.h>

// Entry point of the program
int main(void)
{
    unsigned char ch = 0xC1; // 1100 0001 (has high bit set)

    printf("Original: 0x%02X\n", ch);
    printf("Parity bit is: %s\n", (ch & 0x80) ? "SET" : "CLEAR");

    ch = ch & 0x7F; // strip parity bit
    printf("After clearing parity bit: 0x%02X ('%c')\n", ch, ch);

    return 0;
}
