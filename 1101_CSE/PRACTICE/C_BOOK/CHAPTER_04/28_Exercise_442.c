/*
Exercise 4.4.2:
Question: Assume this declares global variables. Is it valid?
int a = 1, b = a;
Answer: No. In C, global variables cannot be initialized using another variable;
they must be initialized using constant expressions known at compile time.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
