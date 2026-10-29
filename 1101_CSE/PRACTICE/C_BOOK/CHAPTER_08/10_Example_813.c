// Example 8.1.3: Macro name inside a quoted string is not replaced
#include <stdio.h>

#define ERROR "catastrophic error occurred"

// Entry point of the program
int main(void)
{
    printf("ERROR: Please restart your program.\n");

    return 0;
}
