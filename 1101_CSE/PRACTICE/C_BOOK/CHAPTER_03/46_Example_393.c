// Example 3.9.3: Multiple cases sharing statement sequence
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch;

    printf("Enter a letter: ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("is a vowel\n");
            break;
        default:
            printf("is a consonant\n");
    }

    return 0;
}
