// Exercise 1.7.1: Compile and run Section 1.7 examples
#include <stdio.h>

void func1(void);
void func2(void);

// Calls user-defined functions
int main(void)
{
    func1();
    func2();

    return 0;
}

// Prints first message
void func1(void)
{
    printf("Function 1\n");
}

// Prints second message
void func2(void)
{
    printf("Function 2\n");
}
