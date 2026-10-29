// Mastery Skills Check 4: Recursive function printing alphabet A to Z
#include <stdio.h>

void alpha(char ch);

// Entry point of the program
int main(void)
{
    alpha('A');
    printf("\n");

    return 0;
}

// Displays alphabet recursively
void alpha(char ch)
{
    printf("%c", ch);
    if(ch < 'Z') alpha(ch + 1);
}
