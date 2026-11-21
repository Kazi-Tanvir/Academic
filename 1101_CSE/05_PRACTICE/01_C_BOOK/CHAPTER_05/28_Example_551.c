// Example 5.5.1: 2D array of strings
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char text[10][80];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%79s", text[i]);
    }

    for(i = 0; i < 3; i++) {
        printf("%s\n", text[i]);
    }

    return 0;
}
