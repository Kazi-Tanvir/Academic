// Example 7.2.1: Recursive function printing numbers 1 to 10
#include <stdio.h>

void count_down(int i);

// Entry point of the program
int main(void)
{
    count_down(1);
    printf("\n");

    return 0;
}

// Prints numbers recursively from i to 10
void count_down(int i)
{
    printf("%d ", i);
    if(i < 10) count_down(i + 1);
}
