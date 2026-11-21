// Example 12.2.4: Conditional compilation using #elif
#include <stdio.h>

#define NUM 2

// Entry point of the program
int main(void)
{
#if NUM == 1
    printf("NUM is 1\n");
#elif NUM == 2
    printf("NUM is 2\n");
#else
    printf("NUM is something else\n");
#endif

    return 0;
}
