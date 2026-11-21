// Exercise 1.9.1: Function outnum() displaying integer argument
#include <stdio.h>

void outnum(int num);

// Calls outnum with an integer argument
int main(void)
{
    outnum(10);

    return 0;
}

// Prints the integer argument
void outnum(int num)
{
    printf("%d", num);
}
