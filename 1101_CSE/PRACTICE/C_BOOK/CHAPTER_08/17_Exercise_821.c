// Exercise 8.2.1: getchar() and putchar() with error checking for EOF
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    printf("Enter characters (press ENTER to finish):\n");
    do {
        i = getchar();
        if (i == EOF) {
            printf("Error on input.\n");
            break;
        }
        if (putchar('.') == EOF) {
            printf("Error on output.\n");
            break;
        }
    } while ((char)i != '\n');

    return 0;
}
