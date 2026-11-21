// Example 8.6.1: %s stops at first whitespace in scanf()
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80];

    printf("Enter a string: ");
    if (scanf("%79s", str) == 1) {
        printf("%s\n", str);
    }

    return 0;
}
