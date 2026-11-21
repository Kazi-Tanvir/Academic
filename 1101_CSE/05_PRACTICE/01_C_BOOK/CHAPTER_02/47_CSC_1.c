// Cumulative Skills Check 1: Watch for tab, newline, and backspace
#include <stdio.h>

// Reads characters in a loop, reporting tabs, newlines, and backspaces until 'q'
int main(void)
{
    char ch;

    // Using if-else since switch is taught in Chapter 3
    for(;;) {
        scanf("%c", &ch);
        if(ch == 'q') break;
        if(ch == '\t') printf("tab\n");
        else if(ch == '\n') printf("newline\n");
        else if(ch == '\b') printf("backspace\n");
    }

    return 0;
}
