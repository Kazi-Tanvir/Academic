// Exercise 2.2.1: Display sum or product based on user choice
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int a, b, choice;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("1: Sum, 2: Product\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1) printf("Sum: %d", a + b);
    else printf("Product: %d", a * b);

    return 0;
}
