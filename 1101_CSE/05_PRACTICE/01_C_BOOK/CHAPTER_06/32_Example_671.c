// Example 6.7.1: Passing pointer to function to alter argument value
#include <stdio.h>

void swap(int *x, int *y);

// Entry point of the program
int main(void)
{
    int a = 5, b = 10;

    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

// Swaps values of two integers via pointers
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
