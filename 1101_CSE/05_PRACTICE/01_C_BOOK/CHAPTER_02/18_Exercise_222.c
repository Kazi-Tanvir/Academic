// Exercise 2.2.2: Even or odd using if-else
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if((num % 2) == 0) printf("Even");
    else printf("Odd");

    return 0;
}
