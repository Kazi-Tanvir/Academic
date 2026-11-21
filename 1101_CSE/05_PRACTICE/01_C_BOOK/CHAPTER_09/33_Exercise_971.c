// Exercise 9.7.1: Erase file with confirmation prompt
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Entry point of the program
int main(void)
{
    char fname[80];

    printf("Enter name of file to erase: ");
    if (scanf("%79s", fname) == 1) {
        printf("Are you sure? (Y/N) ");
        char ans;
        if (scanf(" %c", &ans) == 1 && toupper((unsigned char)ans) == 'Y') {
            if (remove(fname)) {
                printf("File not found or write protected.\n");
            } else {
                printf("File deleted.\n");
            }
        }
    }

    return 0;
}
