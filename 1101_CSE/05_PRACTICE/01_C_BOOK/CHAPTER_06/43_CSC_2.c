// Cumulative Skills Check 2: Count spaces in string using pointer
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80] = "Count spaces with pointer";
    char *p = str;
    int spaces = 0;

    while(*p) {
        if(*p == ' ') spaces++;
        p++;
    }

    printf("Spaces: %d\n", spaces);

    return 0;
}
