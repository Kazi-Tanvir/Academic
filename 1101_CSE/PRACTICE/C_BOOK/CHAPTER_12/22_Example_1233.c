// Example 12.3.3: Demonstrating the #line directive
#include <stdio.h>

// Entry point of the program
int main(void)
{
#line 1000 "myprog.c"
    printf("Line: %d, File: %s\n", __LINE__, __FILE__);

    return 0;
}
