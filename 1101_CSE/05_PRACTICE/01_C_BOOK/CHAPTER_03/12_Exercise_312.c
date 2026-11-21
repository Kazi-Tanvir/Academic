// Exercise 3.1.2: Display ASCII codes for A-Z and a-z
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch;

    for(ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c: %d  ", ch, ch);
    }
    printf("\n");

    for(ch = 'a'; ch <= 'z'; ch++) {
        printf("%c: %d  ", ch, ch);
    }
    printf("\n");

    return 0;
}
