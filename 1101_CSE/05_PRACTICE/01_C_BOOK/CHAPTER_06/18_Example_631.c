// Example 6.3.1: Converting string to uppercase using pointer
#include <stdio.h>
#include <ctype.h>

// Entry point of the program
int main(void)
{
    char str[80] = "this is a test";
    char *p = str;

    while(*p) {
        *p = (char)toupper((unsigned char)*p);
        p++;
    }

    printf("%s\n", str);

    return 0;
}
