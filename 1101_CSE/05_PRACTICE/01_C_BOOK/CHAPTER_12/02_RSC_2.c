/*
Review Skills Check 2:
Question: What is wrong with this function?
void f(const int *i) {
    *i = 100;
}
Answer: The parameter i is declared as a pointer to a const int (const int *i). Attempting to modify the target object via *i = 100 violates the const qualifier and causes a compiler error.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
