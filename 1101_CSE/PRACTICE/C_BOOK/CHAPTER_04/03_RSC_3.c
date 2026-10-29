// Review Skills Check 3: Input characters until ENTER key
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch = ' ';

    printf("Enter characters (press ENTER to end):\n");
    do {
        scanf("%c", &ch);
    } while(ch != '\n');

    return 0;
}
