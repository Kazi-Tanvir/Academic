// Example 12.2.5: The defined preprocessor operator
#include <stdio.h>

#define TESTPROJECT

// Entry point of the program
int main(void)
{
#if defined TESTPROJECT
    printf("TESTPROJECT is defined.\n");
#endif

    return 0;
}
