/*
Cumulative Skills Check 2:
Question: Why can the return value of getchar() or getche() (which returns int)
be assigned to a char variable without causing a problem?
Answer: The return value represents a character code (0-255). When assigned
to a char variable, C automatically truncates the high-order bytes and keeps
the low-order byte containing the ASCII code.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
