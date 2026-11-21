// Exercise 8.3.1: Displays ASCII code of each typed key without echoing character
#include <conio.h>
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch;

    printf("Press a key to see its ASCII code:\n");
    ch = (char)getch();
    printf("ASCII code: %d\n", (unsigned char)ch);

    return 0;
}
