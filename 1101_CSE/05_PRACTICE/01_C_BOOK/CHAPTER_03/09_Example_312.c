// Example 3.1.2: Menu selection using character input
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

    if(ch == 'A') printf("%d", a + b);
    if(ch == 'S') printf("%d", a - b);
    if(ch == 'M') printf("%d", a * b);
    if(ch == 'D' && b != 0) printf("%d", a / b);

    return 0;
}
