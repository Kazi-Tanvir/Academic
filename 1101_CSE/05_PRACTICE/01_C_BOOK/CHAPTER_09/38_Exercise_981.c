// Exercise 9.8.1: Copy text file using I/O redirection (stdin/stdout)
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }

    return 0;
}
