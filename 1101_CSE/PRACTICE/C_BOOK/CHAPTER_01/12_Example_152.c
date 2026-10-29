// Example 1.5.2: Parentheses and spaces for expression clarity
#include <stdio.h>

// Demonstrates expression clarity using parentheses
int main(void)
{
    int count = 5;
    int num = 10;
    int val = 4;

    printf("%d\n", (count * num) + (88 / val) - (19 % count));

    return 0;
}
