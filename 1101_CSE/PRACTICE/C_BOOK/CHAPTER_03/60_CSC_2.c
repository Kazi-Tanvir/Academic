// Cumulative Skills Check 2: Experienced C programmer rewrite
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i, j, k;

    for(k = 0; k < 10; k++) {
        printf("Enter first number: ");
        scanf("%d", &i);

        printf("Enter second number: ");
        scanf("%d", &j);

        if(j) printf("%d\n", i / j);
        else printf("cannot divide by zero\n");
    }

    return 0;
}
