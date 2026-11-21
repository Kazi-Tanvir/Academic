// Example 10.4.1: Bit-fields with unnamed spacer bits
#include <stdio.h>

struct b_type {
    unsigned first: 1;
    int : 6;
    unsigned last: 1;
} bits;

// Entry point of the program
int main(void)
{
    bits.first = 1;
    bits.last = 1;

    printf("first: %u, last: %u\n", bits.first, bits.last);

    return 0;
}
