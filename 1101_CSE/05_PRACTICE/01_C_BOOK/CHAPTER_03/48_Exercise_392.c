// Exercise 3.9.2: Count letters, digits, and punctuation using switch
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch = ' ';
    int letters = 0, digits = 0, spaces = 0;

    printf("Enter text (type ENTER/return to finish):\n");

    while(ch != '\n') {
        scanf("%c", &ch);
        switch(ch) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                digits++;
                break;
            case ' ': case '\t':
                spaces++;
                break;
            case '\n':
                break;
            default:
                if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                    letters++;
                }
                break;
        }
    }

    printf("Letters: %d, Digits: %d, Spaces: %d\n", letters, digits, spaces);

    return 0;
}
