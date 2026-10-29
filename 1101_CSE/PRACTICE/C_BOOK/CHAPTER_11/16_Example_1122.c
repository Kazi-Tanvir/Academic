// Example 11.2.2: Pointer parameter declared as const char *p
#include <stdio.h>

// Displays a string without modifying it
void sp_to_dash(const char *str)
{
    while (*str) {
        if (*str == ' ') printf("-");
        else printf("%c", *str);
        str++;
    }
    printf("\n");
}

// Entry point of the program
int main(void)
{
    sp_to_dash("this is a test");

    return 0;
}
