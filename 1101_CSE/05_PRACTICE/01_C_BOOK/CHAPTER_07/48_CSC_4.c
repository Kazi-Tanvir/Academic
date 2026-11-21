/*
Cumulative Skills Check 4:
Question: Explain how pointers allow C to construct a call-by-reference parameter passing mechanism.
Answer: When the caller passes the memory address of a variable to a function,
the function receives a pointer parameter. Inside the function, the indirection
operator (*) dereferences the pointer, directly accessing and modifying the
actual variable located in the caller's stack frame.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
