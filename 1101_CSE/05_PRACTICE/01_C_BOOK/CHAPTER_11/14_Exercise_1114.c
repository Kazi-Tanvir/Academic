/*
Exercise 11.1.4:
Question: What is wrong with this fragment?
register int i;
int *p;
p = &i;
Answer: You cannot take the address (& operator) of a variable declared with the register storage class specifier, because register variables may reside in CPU registers which do not have memory addresses.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
