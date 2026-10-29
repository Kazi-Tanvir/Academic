// Example 3.3.2: For loop with omitted loop expressions
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int a, b;
    char ch = 'A';

    for( ; ch != 'Q'; ) {
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
        printf("Sum is %d\n", a + b);

        printf("Press Q to quit, any other key to continue: ");
        scanf(" %c", &ch);
    }

    return 0;
}
