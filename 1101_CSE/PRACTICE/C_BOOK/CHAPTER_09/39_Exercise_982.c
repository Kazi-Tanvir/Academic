// Exercise 9.8.2: Reading strings from stdin with fgets() and stripping newline
#include <stdio.h>
#include <string.h>

// Reads a string from stdin safely
char *get_string(char *s, int max)
{
    if (fgets(s, max, stdin)) {
        int len = (int)strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
        }
        return s;
    }
    return NULL;
}

// Entry point of the program
int main(void)
{
    char str[80];

    printf("Enter a line of text: ");
    if (get_string(str, sizeof(str))) {
        printf("You typed: %s\n", str);
    }

    return 0;
}
