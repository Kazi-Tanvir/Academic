// Example 3.7.3: Break exiting an infinite for loop
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch;

    for( ; ; ) {
        scanf(" %c", &ch);
        if(ch == 'q') break;
    }
    printf("Found the q\n");

    return 0;
}
