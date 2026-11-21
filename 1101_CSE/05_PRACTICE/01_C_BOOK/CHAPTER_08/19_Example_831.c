// Example 8.3.1: Interactive keyboard input using getch() and cprintf()
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

// Entry point of the program
int main(void)
{
    char ch;

    printf("Type characters ('q' to quit):\n");
    do {
        ch = (char)getch();
        cprintf("%c", toupper((unsigned char)ch));
    } while (ch != 'q');
    cprintf("\n\r");

    return 0;
}
