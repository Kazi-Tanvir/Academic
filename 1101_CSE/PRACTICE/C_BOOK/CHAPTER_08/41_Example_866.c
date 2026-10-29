// Example 8.6.6: Matching non-whitespace characters in format string
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i, j;

    printf("Enter a decimal number (e.g. 12.34): ");
    if (scanf("%d.%d", &i, &j) == 2) {
        printf("left part: %d, right part: %d\n", i, j);
    }

    return 0;
}
