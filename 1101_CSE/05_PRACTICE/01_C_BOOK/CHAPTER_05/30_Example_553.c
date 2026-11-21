// Example 5.5.3: Accessing individual characters in a string table
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char words[][10] = {
        "one", "two", "three"
    };

    printf("First char of second word: %c\n", words[1][0]);

    return 0;
}
