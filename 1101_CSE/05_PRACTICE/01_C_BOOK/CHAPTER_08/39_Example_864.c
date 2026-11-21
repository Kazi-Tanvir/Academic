// Example 8.6.4: Arithmetic calculator reading operation with scanf()
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i, j;
    char op;

    printf("Enter operation (e.g. 12 + 4): ");
    if (scanf("%d %c%d", &i, &op, &j) == 3) {
        switch (op) {
            case '+': printf("%d\n", i + j);
                break;
            case '-': printf("%d\n", i - j);
                break;
            case '/': 
                if (j != 0) printf("%d\n", i / j);
                else printf("Division by zero.\n");
                break;
            case '*': printf("%d\n", i * j);
                break;
            default: printf("Unknown operator.\n");
        }
    }

    return 0;
}
