/*
Mastery Skills Check 8:
Question: Is this goto fragment correct?
Answer: A goto must jump to a label within the same function. If jumping
between functions, it is illegal in C.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
