/*
Cumulative Skills Check 3:
Question: In this fragment, will the loop ever terminate? Why? (Assume 16-bit int)
short int i;
for(i=0; i<33000; i++) ...
Answer: No. A 16-bit signed short int has a maximum value of 32767. When it
increments past 32767, it overflows and wraps around to -32768, so i never
reaches 33000, creating an infinite loop.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
