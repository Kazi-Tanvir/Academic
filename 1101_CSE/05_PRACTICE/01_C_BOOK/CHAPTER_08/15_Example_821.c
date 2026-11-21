// Example 8.2.1: Line-buffered character input with getchar()
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch;

    printf("Type characters and press ENTER:\n");
    do {
        ch = (char)getchar();
        putchar('.');
    } while (ch != '\n');

    return 0;
}
