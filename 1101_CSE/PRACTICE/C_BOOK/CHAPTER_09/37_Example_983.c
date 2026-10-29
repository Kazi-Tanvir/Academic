// Example 9.8.3: Using fgets(str, size, stdin) and stripping newline
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char str[80];
    int i;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin)) {
        i = (int)strlen(str) - 1;
        if (i >= 0 && str[i] == '\n') str[i] = '\0';
        printf("This is your string: %s\n", str);
    }

    return 0;
}
