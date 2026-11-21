// Mastery Skills Check 7: Display high- and low-order bytes of an integer using a union
#include <stdio.h>

union int_bytes {
    short s;
    unsigned char b[2];
};

// Entry point of the program
int main(void)
{
    union int_bytes u;

    u.s = 0x1234;

    printf("Short: 0x%04X\n", u.s);
    printf("Byte 0: 0x%02X, Byte 1: 0x%02X\n", u.b[0], u.b[1]);

    return 0;
}
