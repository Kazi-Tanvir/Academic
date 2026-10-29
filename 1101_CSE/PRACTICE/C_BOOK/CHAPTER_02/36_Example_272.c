// Example 2.7.2: Outcome of relational and logical operations (0 or 1)
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i, j;

    printf("Enter first number: ");
    scanf("%d", &i);
    printf("Enter second number: ");
    scanf("%d", &j);

    printf("i < j %d\n", i < j);
    printf("i <= j %d\n", i <= j);
    printf("i == j %d\n", i == j);
    printf("i > j %d\n", i > j);
    printf("i >= j %d\n", i >= j);

    printf("i && j %d\n", i && j);
    printf("i || j %d\n", i || j);
    printf("!i !j %d %d\n", !i, !j);

    return 0;
}
