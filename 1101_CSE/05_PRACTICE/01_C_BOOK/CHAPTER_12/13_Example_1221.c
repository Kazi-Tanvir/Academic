// Example 12.2.1: Conditional compilation using #if and #else
#include <stdio.h>

#define CHAR_SET 256

// Entry point of the program
int main(void)
{
#if CHAR_SET == 256
    printf("Character set has 256 characters.\n");
#else
    printf("Character set has 128 characters.\n");
#endif

    return 0;
}
