// Cumulative Skills Check 1: Watch for tab, newline, and backspace using switch
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch = ' ';

    while(ch != 'q') {
        scanf("%c", &ch);
        switch(ch) {
            case '\t':
                printf("tab\n");
                break;
            case '\n':
                printf("newline\n");
                break;
            case '\b':
                printf("backspace\n");
                break;
            case 'q':
                break;
        }
    }

    return 0;
}
