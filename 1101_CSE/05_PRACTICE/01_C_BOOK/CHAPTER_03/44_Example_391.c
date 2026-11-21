// Example 3.9.1: Switch statement processing menu commands
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int a, b;
    char ch;

    printf("Do you want to:\n");
    printf("Add, Subtract, Multiply, or Divide?\n");
    printf("Enter first letter: ");
    scanf(" %c", &ch);

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch(ch) {
        case 'A':
            printf("%d\n", a + b);
            break;
        case 'S':
            printf("%d\n", a - b);
            break;
        case 'M':
            printf("%d\n", a * b);
            break;
        case 'D':
            if(b != 0) printf("%d\n", a / b);
            break;
        default:
            printf("Invalid selection\n");
    }

    return 0;
}
