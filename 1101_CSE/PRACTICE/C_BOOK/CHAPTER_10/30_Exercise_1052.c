// Exercise 10.5.2: Convert int into long using a union
#include <stdio.h>

union conv {
    long l;
    int i;
};

// Entry point of the program
int main(void)
{
    union conv u;

    u.l = 0;
    u.i = 12345;

    printf("Integer: %d, as long: %ld\n", u.i, u.l);

    return 0;
}
