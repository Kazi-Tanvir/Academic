// Example 5.2.3: Zero-length string using strcpy with empty string
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char str[80];

    strcpy(str, "");
    printf("Length of empty string: %lu\n", (unsigned long)strlen(str));

    return 0;
}
