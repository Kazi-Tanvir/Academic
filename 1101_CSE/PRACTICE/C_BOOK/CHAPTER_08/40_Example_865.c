// Example 8.6.5: Maximum field width specifier in scanf()
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i, j;

    printf("Enter an integer: ");
    if (scanf("%3d%d", &i, &j) == 2) {
        printf("%d %d\n", i, j);
    }

    return 0;
}
