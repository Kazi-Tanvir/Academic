// Mastery Skills Check 6: Macro COUNT as 100, display 0 to 99
#include <stdio.h>

#define COUNT 100

// Entry point of the program
int main(void)
{
    int i;

    for (i = 0; i < COUNT; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
