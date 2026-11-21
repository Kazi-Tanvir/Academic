// Example 1.8.2: Early return without a value in void function
#include <stdio.h>

void func1(void);

// Calls func1
int main(void)
{
    func1();

    return 0;
}

// Demonstrates early return statement
void func1(void)
{
    printf("This is printed.");
    return;
    printf("This is never printed.");
}
