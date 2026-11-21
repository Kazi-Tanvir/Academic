/*
Exercise 6.2.1:
Question: What is wrong with this fragment?
int *p, val;
...
p = p * 2;
Answer: Multiplication (or division) is not permitted on pointer types.
Only integer addition and subtraction are allowed in pointer arithmetic.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
