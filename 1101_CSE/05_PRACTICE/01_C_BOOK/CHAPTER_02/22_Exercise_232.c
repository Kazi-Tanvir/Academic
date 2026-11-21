/*
Exercise 2.3.2:
Question: Is this fragment correct?
if(count < 100)
    printf("Number is less than 100.");
    printf("Its square is %d.", count * count);

Answer: No. In C, without curly braces {}, only the first printf statement
is conditional upon count < 100. The second printf statement executes
unconditionally every time. A code block with braces is required.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
