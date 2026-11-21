// Example 4.2.1: Local variable shadowing a global variable
#include <stdio.h>

int count = 10;

void f(void);

// Entry point of the program
int main(void)
{
    printf("Global count: %d\n", count);
    f();

    return 0;
}

// Function with local variable count shadowing global count
void f(void)
{
    int count = 20;

    printf("Local count: %d\n", count);
}
