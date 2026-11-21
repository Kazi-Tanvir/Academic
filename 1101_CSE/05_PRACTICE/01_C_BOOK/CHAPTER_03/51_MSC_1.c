// Mastery Skills Check 1: Convert lowercase to uppercase by subtracting 32
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch = ' ';

    printf("Enter characters (press ENTER to stop):\n");

    while(ch != '\n') {
        scanf("%c", &ch);
        if(ch >= 'a' && ch <= 'z') {
            printf("%c", ch - 32);
        } else {
            printf("%c", ch);
        }
    }

    return 0;
}
