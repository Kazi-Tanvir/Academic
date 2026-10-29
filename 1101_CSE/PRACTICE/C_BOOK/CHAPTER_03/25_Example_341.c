// Example 3.4.1: While loop waiting for 'q'
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch = ' ';

    while(ch != 'q') {
        scanf(" %c", &ch);
    }
    printf("Found q\n");

    return 0;
}
