// Example 11.1.5: Using extern declaration for global data
#include <stdio.h>

int count = 10;

// Entry point of the program
int main(void)
{
    extern int count;

    printf("count = %d\n", count);

    return 0;
}
