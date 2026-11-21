// Example 3.6.2: Print the alphabet 3 times using nested loops
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;
    char ch;

    for(i = 0; i < 3; i++) {
        for(ch = 'A'; ch <= 'Z'; ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
