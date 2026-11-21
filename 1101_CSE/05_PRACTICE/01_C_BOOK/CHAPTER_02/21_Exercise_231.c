// Exercise 2.3.1: Add or subtract two integers using code blocks
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int a, b, choice;

    printf("1: Add, 2: Subtract\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
        printf("Result: %d", a + b);
    }
    else {
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
        printf("Result: %d", a - b);
    }

    return 0;
}
