// Example 6.4.2: Error message pointer table
#include <stdio.h>

char *p[] = {
    "Input exceeds limit",
    "Division by zero",
    "Invalid command"
};

// Entry point of the program
int main(void)
{
    printf("%s\n", p[1]);

    return 0;
}
