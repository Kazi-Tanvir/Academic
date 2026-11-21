// Mastery Skills Check 5: Three ways to access third element
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80] = "ABCDE";
    char *p = str;

    printf("%c %c %c\n", str[2], *(str + 2), *(p + 2));

    return 0;
}
