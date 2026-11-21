// Exercise 3.1.1: Read 10 letters and display the earliest in the alphabet
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;
    char ch, smallest;

    printf("Enter 10 letters:\n");
    smallest = 'z';

    for(i = 0; i < 10; i++) {
        scanf(" %c", &ch);
        if(ch < smallest) smallest = ch;
    }

    printf("The earliest letter is %c\n", smallest);

    return 0;
}
