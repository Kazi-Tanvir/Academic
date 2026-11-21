// Example 4.4.3: Local variables re-initialized each function call
#include <stdio.h>

void f(void);

// Entry point of the program
int main(void)
{
    f();
    f();

    return 0;
}

// Function with initialized local variable
void f(void)
{
    int num = 10;

    printf("num: %d\n", num);
    num = 20;
}
