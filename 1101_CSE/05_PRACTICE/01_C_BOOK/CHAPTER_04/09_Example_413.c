// Example 4.1.3: Using char as a small integer
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch;

    ch = 'a';
    printf("%c %d\n", ch, ch);

    ch = ch + 1;
    printf("%c %d\n", ch, ch);

    return 0;
}
