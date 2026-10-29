// Exercise 6.7.1: Custom mystrcat() function using pointers
#include <stdio.h>

void mystrcat(char *to, const char *from);

// Entry point of the program
int main(void)
{
    char str[80] = "first part";

    mystrcat(str, " second part");
    printf("%s\n", str);

    return 0;
}

// Concatenates from to the end of to
void mystrcat(char *to, const char *from)
{
    while(*to) to++;
    while(*from) *to++ = *from++;
    *to = '\0';
}
