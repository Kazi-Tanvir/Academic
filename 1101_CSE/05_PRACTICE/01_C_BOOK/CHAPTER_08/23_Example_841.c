// Example 8.4.1: Checking return value of gets()
#include <stdio.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wattribute-warning"

// Entry point of the program
int main(void)
{
    char *p, str[80];

    printf("Enter a string: ");
    p = gets(str);
    if (p) {
        printf("%s %s\n", p, str);
    }

    return 0;
}
#pragma GCC diagnostic pop
