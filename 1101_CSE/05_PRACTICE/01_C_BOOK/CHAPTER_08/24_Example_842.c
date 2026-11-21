// Example 8.4.2: Calling gets() directly inside if condition
#include <stdio.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wattribute-warning"

// Entry point of the program
int main(void)
{
    char str[80];

    printf("Enter a string: ");
    if (gets(str)) {
        printf("Here is your string: %s\n", str);
    }

    return 0;
}
#pragma GCC diagnostic pop
