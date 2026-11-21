// Example 7.3.1: Call by reference to modify callers arguments
#include <stdio.h>

void swap(int *x, int *y);

// Entry point of the program
int main(void)
{
    int i = 10, j = 20;

    swap(&i, &j);
    printf("i: %d, j: %d\n", i, j);

    return 0;
}

// Swaps two integer variables
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
