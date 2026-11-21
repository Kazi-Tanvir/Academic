// Exercise 7.3.2: Input function prompt() printing message and reading string
#include <stdio.h>

void prompt(const char *msg, char *str);

// Entry point of the program
int main(void)
{
    char str[80];

    prompt("Enter a string: ", str);
    printf("Your string is: %s\n", str);

    return 0;
}

// Displays prompt message and reads string input
void prompt(const char *msg, char *str)
{
    printf("%s", msg);
    scanf("%79s", str);
}
