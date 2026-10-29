// Cumulative Skills Check 3: Count spaces, commas, and periods in a string
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char str[80];
    int spaces = 0, commas = 0, periods = 0;

    printf("Enter a string: ");
    scanf("%79s", str);

    for(size_t i = 0; i < strlen(str); i++) {
        switch(str[i]) {
            case '.': periods++; break;
            case ',': commas++; break;
            case ' ': spaces++; break;
        }
    }

    printf("spaces: %d, commas: %d, periods: %d\n", spaces, commas, periods);

    return 0;
}
