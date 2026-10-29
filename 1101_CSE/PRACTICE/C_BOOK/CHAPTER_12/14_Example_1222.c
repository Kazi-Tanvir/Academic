// Example 12.2.2: Conditional compilation using #ifdef for debugging
#include <stdio.h>

#define DEBUG

// Entry point of the program
int main(void)
{
    int i = 100;

#ifdef DEBUG
    printf("Debug: i = %d\n", i);
#endif

    printf("Execution complete.\n");

    return 0;
}
