// Exercise 12.6.1: Experimenting with function pointers
#include <stdio.h>

// Multiplies integer by 2
int double_it(int x)
{
    return x * 2;
}

// Entry point of the program
int main(void)
{
    int (*fp)(int) = double_it;

    printf("Double 21: %d\n", (*fp)(21));

    return 0;
}
