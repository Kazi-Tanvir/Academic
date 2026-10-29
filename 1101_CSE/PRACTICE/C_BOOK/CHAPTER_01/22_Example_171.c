// Example 1.7.1: A program with two functions
#include <stdio.h>

void func1(void);

// Prints message parts and calls func1
int main(void)
{
    printf("I ");
    func1();
    printf("C.");

    return 0;
}

// Prints the middle word of the message
void func1(void)
{
    printf("like ");
}
