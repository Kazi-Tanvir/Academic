// Example 3.3.4: For loop creating intentional infinite loop with break
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch;

    for( ; ; ) {
        scanf(" %c", &ch);
        if(ch == 'A') break;
    }
    printf("You typed A\n");

    return 0;
}
