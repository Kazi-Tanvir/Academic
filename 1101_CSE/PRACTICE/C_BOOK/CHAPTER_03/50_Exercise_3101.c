// Exercise 3.10.1: Emulating a while loop with goto
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i = 1;

while_start:
    if(i > 10) goto while_end;
    printf("%d ", i);
    i++;
    goto while_start;

while_end:
    printf("\n");

    return 0;
}
