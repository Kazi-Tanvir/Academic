// Example 11.1.4: Static local variable controlling recursive function
#include <stdio.h>

// Recursive function controlled by static counter
void f(void)
{
    static int stop = 0;

    stop++;
    if (stop == 10) return;
    printf("%d ", stop);
    f();
}

// Entry point of the program
int main(void)
{
    f();
    printf("\n");

    return 0;
}
