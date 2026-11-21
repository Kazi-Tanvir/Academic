// Example 1.8.1: Function returning a value
#include <stdio.h>

int get_sqr(void);

// Calls get_sqr and displays the result
int main(void)
{
    int sqr;

    sqr = get_sqr();
    printf("Square: %d", sqr);

    return 0;
}

// Prompts for a number and returns its square
int get_sqr(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    return num * num;
}
