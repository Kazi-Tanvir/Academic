// Example 11.8.2: Compound arithmetic assignment operators
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for (i = 0; i < 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
