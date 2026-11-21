// Exercise 10.4.1: Structure with three bit-fields of size 3, 3, and 2 bits
#include <stdio.h>

struct b_type {
    int a: 3;
    int b: 3;
    int c: 2;
} bvar;

// Entry point of the program
int main(void)
{
    bvar.a = -1;
    bvar.b = 3;
    bvar.c = 1;

    printf("a: %d, b: %d, c: %d\n", bvar.a, bvar.b, bvar.c);

    return 0;
}
