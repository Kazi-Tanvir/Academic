// Mastery Skills Check 5: Read strings until 'quit' is entered
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char str[80];

    do {
        printf("Enter a string: ");
        scanf("%79s", str);
    } while(strcmp("quit", str));

    return 0;
}
