// Example 3.10.1: Emulating a for loop with goto
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i = 1;

again:
    printf("%d ", i);
    i++;
    if(i <= 10) goto again;

    printf("\n");

    return 0;
}
