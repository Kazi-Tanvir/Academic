/*
Example 4.7.2:
Question: Can you cast a variable that is on the left side of an assignment?
Answer: No. A type cast produces an rvalue (a temporary value), not an lvalue.
Therefore, an expression like '(float) i = 10.0;' is illegal in C.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
