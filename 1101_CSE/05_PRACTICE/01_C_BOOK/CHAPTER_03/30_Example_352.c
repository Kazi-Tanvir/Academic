// Example 3.5.2: Menu selection with do-while loop input validation
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int a, b;
    char ch;

    printf("Do you want to:\n");
    printf("Add, Subtract, Multiply, or Divide?\n");

    do {
        printf("Enter first letter: ");
        scanf(" %c", &ch);
    } while(ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D');

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if(ch == 'A') printf("%d", a + b);
    else if(ch == 'S') printf("%d", a - b);
    else if(ch == 'M') printf("%d", a * b);
    else if(ch == 'D' && b != 0) printf("%d", a / b);

    return 0;
}
