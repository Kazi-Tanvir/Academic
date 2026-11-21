// Cumulative Skills Check 1: Pad strings with periods up to length 80
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char str[80];

    printf("Enter a string: ");
    scanf("%79s", str);

    for(size_t i = strlen(str); i < 79; i++) {
        strcat(str, ".");
    }

    printf("%s\n", str);

    return 0;
}
