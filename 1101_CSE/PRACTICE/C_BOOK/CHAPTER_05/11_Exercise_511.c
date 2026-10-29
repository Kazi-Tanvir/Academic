/*
Exercise 5.1.1:
Question: What is wrong with this program fragment?
int count[10], i;
for(i=0; i<100; i++) count[i] = i;
Answer: The array count is declared with 10 elements (indices 0 to 9), but the
loop iterates from 0 to 99, overrunning the array bounds and causing undefined behavior.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
