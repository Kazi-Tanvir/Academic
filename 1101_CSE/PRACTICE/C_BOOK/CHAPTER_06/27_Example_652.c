// Example 6.5.2: Two-dimensional pointer array
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char *table[][2] = {
        {"Yes", "Proceed"},
        {"No", "Halt"},
        {"Maybe", "Retry"}
    };

    printf("%s: %s\n", table[0][0], table[0][1]);

    return 0;
}
