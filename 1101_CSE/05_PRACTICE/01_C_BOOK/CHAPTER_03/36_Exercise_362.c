// Exercise 3.6.2: Read 10 chars, display periods equal to ASCII code
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i, j;
    char ch;

    for(i = 0; i < 10; i++) {
        scanf(" %c", &ch);
        for(j = 0; j < (int)ch; j++) {
            printf(".");
        }
        printf("\n");
    }

    return 0;
}
