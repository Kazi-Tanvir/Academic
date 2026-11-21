// Example 1.9.2: Passing characters to a function
#include <stdio.h>

void outchar(char ch);

// Calls outchar with character literals
int main(void)
{
    outchar('A');
    outchar('B');
    outchar('C');

    return 0;
}

// Displays a single character
void outchar(char ch)
{
    printf("%c", ch);
}
