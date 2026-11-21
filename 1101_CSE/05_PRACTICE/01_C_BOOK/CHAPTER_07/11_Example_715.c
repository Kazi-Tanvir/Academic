// Example 7.1.5: Function returning a pointer
#include <stdio.h>

char *find_char(char *str, char c);

// Entry point of the program
int main(void)
{
    char str[80] = "this is a test";
    char *p;

    p = find_char(str, 'a');
    if(p) printf("Found from: %s\n", p);

    return 0;
}

// Returns pointer to first occurrence of c in str, or NULL
char *find_char(char *str, char c)
{
    while(*str) {
        if(*str == c) return str;
        str++;
    }

    return NULL;
}
