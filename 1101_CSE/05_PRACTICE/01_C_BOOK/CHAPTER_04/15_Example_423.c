// Example 4.2.3: Local variables lose value between calls
#include <stdio.h>

void f(void);

// Entry point of the program
int main(void)
{
    f();
    f();

    return 0;
}

// Demonstrates non-persistence of automatic local variables
void f(void)
{
    int num = 99;

    printf("%d ", num);
    num++;
    printf("%d\n", num);
}
