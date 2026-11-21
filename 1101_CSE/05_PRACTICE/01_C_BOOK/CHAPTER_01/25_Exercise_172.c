// Exercise 1.7.2: Two functions printing quote
#include <stdio.h>

void one(void);
void two(void);

// Calls one() and two() to print quote
int main(void)
{
    one();
    two();

    return 0;
}

// Prints first half of the quote
void one(void)
{
    printf("The summer soldier, ");
}

// Prints second half of the quote
void two(void)
{
    printf("the sunshine patriot.");
}
