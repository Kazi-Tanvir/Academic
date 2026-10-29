/*
Example 11.2.3:
Question: Why does assigning through a const pointer parameter produce a compiler error?
Answer: A parameter declared as const type *ptr informs the compiler that the function will not modify the data pointed to by ptr. Any assignment like *ptr = 'X' causes a compile-time error.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
