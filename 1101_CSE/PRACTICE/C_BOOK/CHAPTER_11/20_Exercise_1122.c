// Exercise 11.2.2: Custom mystrcpy() with const source pointer
#include <stdio.h>

// Copies src string to dst string safely
char *mystrcpy(char *dst, const char *src)
{
    char *p = dst;
    while ((*dst++ = *src++)) ;
    return p;
}

// Entry point of the program
int main(void)
{
    char str[80];

    mystrcpy(str, "Copy this string.");
    printf("%s\n", str);

    return 0;
}
