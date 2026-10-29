// Exercise 5.2.1: Reverse a string
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char str[80];
    int i;

    printf("Enter a string: ");
    scanf("%79s", str);

    for(i = (int)strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
