// Example 2.2.1: Determining if a number is negative or non-negative using else
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num < 0) printf("Number is negative.");
    else printf("Number is non-negative.");

    return 0;
}
