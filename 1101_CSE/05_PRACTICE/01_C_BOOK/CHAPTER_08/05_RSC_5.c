// Review Skills Check 5: Recursive string length function rstrlen()
#include <stdio.h>

// Computes string length recursively
int rstrlen(char *p)
{
    if (*p) {
        return 1 + rstrlen(p + 1);
    }
    return 0;
}

// Entry point of the program
int main(void)
{
    printf("%d\n", rstrlen("hello there"));

    return 0;
}
