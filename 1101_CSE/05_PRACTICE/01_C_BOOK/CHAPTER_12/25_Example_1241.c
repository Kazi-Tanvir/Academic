// Example 12.4.1: Built-in macros __LINE__, __FILE__, __DATE__, __TIME__, __STDC__
#include <stdio.h>

// Entry point of the program
int main(void)
{
    printf("Line: %d\n", __LINE__);
    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("STDC: %d\n", __STDC__);

    return 0;
}
