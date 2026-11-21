// Example 11.9.1: Comma operator in for loop
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i, j;

    for (i = 0, j = 10; i < 10; i++, j--) {
        printf("i: %d, j: %d\n", i, j);
    }

    return 0;
}
