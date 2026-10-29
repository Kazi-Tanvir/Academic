// Example 6.7.2: Passing string pointer to function
#include <stdio.h>
#include <ctype.h>

void str_upper(char *p);

// Entry point of the program
int main(void)
{
    char str[80] = "lowercase string";

    str_upper(str);
    printf("%s\n", str);

    return 0;
}

// Converts string in-place to uppercase
void str_upper(char *p)
{
    while(*p) {
        *p = (char)toupper((unsigned char)*p);
        p++;
    }
}
