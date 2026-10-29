// Exercise 1.8.2: Function convert() converting dollars to pounds
#include <stdio.h>

int convert(void);

// Calls convert and displays the result in pounds
int main(void)
{
    printf("%d", convert());

    return 0;
}

// Prompts for dollars and returns pounds ($2.00 per pound)
int convert(void)
{
    int dollars;

    printf("Enter number of dollars: ");
    scanf("%d", &dollars);

    return dollars / 2;
}
