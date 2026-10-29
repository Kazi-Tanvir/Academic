// Cumulative Skills Check 2: string_up() function converting string to uppercase
#include <stdio.h>
#include <ctype.h>

void string_up(char *p);

// Entry point of the program
int main(void)
{
    char str[] = "this is a test";

    string_up(str);
    printf("%s\n", str);

    return 0;
}

// Converts characters in string to uppercase
void string_up(char *p)
{
    while(*p) {
        *p = (char)toupper((unsigned char)*p);
        p++;
    }
}
