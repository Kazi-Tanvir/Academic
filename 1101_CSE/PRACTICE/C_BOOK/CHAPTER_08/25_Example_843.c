/*
Example 8.4.3:
Question: Why does calling gets(p) with an uninitialized pointer cause program failure?
Answer: Even though gets() returns a pointer to the start of the string, it must be called with a pointer to allocated storage (an actual array). If called with an uninitialized pointer, it attempts to write into an arbitrary memory location, causing a segmentation fault or undefined behavior.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
