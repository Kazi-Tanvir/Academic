// Example 3.1.1: Read a character and display its ASCII code
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("\nIts ASCII code is %d\n", ch);

    return 0;
}
