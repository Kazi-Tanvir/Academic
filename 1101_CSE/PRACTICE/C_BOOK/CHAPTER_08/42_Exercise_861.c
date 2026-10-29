// Exercise 8.6.1: Input first, middle, and last names with field limit
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char first[21], middle[21], last[21];

    printf("Enter your entire name (first middle last): ");
    if (scanf("%20s%20s%20s", first, middle, last) == 3) {
        printf("%s %s %s\n", first, middle, last);
    }

    return 0;
}
