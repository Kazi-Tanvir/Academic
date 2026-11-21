// Example 10.5.2: Binary display of character using union of char and bit-field struct
#include <stdio.h>

struct sample {
    unsigned a: 1;
    unsigned b: 1;
    unsigned c: 1;
    unsigned d: 1;
    unsigned e: 1;
    unsigned f: 1;
    unsigned g: 1;
    unsigned h: 1;
};

union key_type {
    unsigned char ch;
    struct sample bits;
} key;

// Entry point of the program
int main(void)
{
    key.ch = 'X';

    printf("Binary code for '%c': ", key.ch);
    printf("%u %u %u %u %u %u %u %u\n",
           key.bits.h, key.bits.g, key.bits.f, key.bits.e,
           key.bits.d, key.bits.c, key.bits.b, key.bits.a);

    return 0;
}
