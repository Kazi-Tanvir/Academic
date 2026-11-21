/*
Cumulative Skills Check 4:
Question: What is wrong with this fragment?
char str[80];
str = getchar();
Answer: getchar() returns a single character (as an int), not a string.
You cannot assign a character to an array variable name (which is a non-modifiable lvalue).
To read a string, use scanf() or fgets().
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
