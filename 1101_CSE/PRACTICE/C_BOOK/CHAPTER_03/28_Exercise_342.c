// Exercise 3.4.2: Decode encoded message by subtracting 1
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch = ' ';

    printf("Enter encoded message (type 'q' to stop):\n");

    while(ch != 'q') {
        scanf(" %c", &ch);
        if(ch != 'q') printf("%c", ch - 1);
    }

    return 0;
}
