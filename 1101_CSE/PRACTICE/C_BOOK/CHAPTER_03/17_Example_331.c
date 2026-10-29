// Example 3.3.1: For loop controlled by character input
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;
    char ch = 'a';

    for(i = 0; ch != 'q'; i++) {
        printf("pass: %d\n", i);
        scanf(" %c", &ch);
    }

    return 0;
}
