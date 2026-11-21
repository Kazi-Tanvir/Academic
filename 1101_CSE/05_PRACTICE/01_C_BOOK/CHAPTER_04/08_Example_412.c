// Example 4.1.2: Signed vs unsigned integer behavior on overflow
#include <stdio.h>

// Entry point of the program
int main(void)
{
    short int i;
    unsigned short int u;

    u = 33000;
    i = (short int)u;

    printf("%hd %hu\n", i, u);

    return 0;
}
