// Example 6.6.2: Multiple indirection with string pointer
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80] = "Test string";
    char *p = str;
    char **mp = &p;

    printf("%s\n", *mp);

    return 0;
}
