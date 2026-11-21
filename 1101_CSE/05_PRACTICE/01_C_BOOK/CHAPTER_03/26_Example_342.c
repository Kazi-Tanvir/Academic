// Example 3.4.2: Code machine encoding characters by adding 1
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch = ' ';

    printf("Enter your message (type 'q' to quit):\n");

    while(ch != 'q') {
        scanf(" %c", &ch);
        if(ch != 'q') printf("%c", ch + 1);
    }

    return 0;
}
