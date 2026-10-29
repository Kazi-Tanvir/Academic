// Example 4.6.2: Truncation when assigning larger int to smaller int
#include <stdio.h>

// Entry point of the program
int main(void)
{
    short int si;
    int i;

    i = 100000;
    si = (short int)i;

    printf("%d %hd\n", i, si);

    return 0;
}
