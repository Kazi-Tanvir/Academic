// Example 4.3.1: Importance of matching format specifiers with types
#include <stdio.h>

// Entry point of the program
int main(void)
{
    short int si = 10;
    long int li = 100000L;

    printf("short: %hd, long: %ld\n", si, li);

    return 0;
}
