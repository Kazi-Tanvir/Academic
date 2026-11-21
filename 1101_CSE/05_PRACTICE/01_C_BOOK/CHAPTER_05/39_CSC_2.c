// Cumulative Skills Check 2: Simple string encoder pairing characters
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char str[80];
    int i, j;

    printf("Enter message: ");
    scanf("%79s", str);

    i = 0;
    j = (int)strlen(str) - 1;
    while(i <= j) {
        if(i < j) printf("%c%c", str[i], str[j]);
        else printf("%c", str[i]);
        i++;
        j--;
    }
    printf("\n");

    return 0;
}
