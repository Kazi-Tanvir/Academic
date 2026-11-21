// Example 11.2.4: volatile variable declaration
#include <stdio.h>

volatile int timer_count = 0;

// Entry point of the program
int main(void)
{
    printf("volatile timer_count: %d\n", timer_count);

    return 0;
}
