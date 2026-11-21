// Review Skills Check 4: Double and halve integer using shift operators
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i = 24;

    printf("Original: %d\n", i);
    printf("Doubled:  %d\n", i << 1);
    printf("Halved:   %d\n", i >> 1);

    return 0;
}
