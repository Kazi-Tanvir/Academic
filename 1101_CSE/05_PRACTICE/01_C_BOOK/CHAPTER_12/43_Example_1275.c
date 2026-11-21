/*
Example 12.7.5:
Question: What is wrong with this fragment?
p = malloc(10);
for (i = 0; i < 100; i++) p[i] = i;
Answer: Buffer overrun. malloc(10) allocates only 10 bytes of memory, but the loop attempts to write 100 elements (indices 0 to 99), corrupting heap metadata and memory.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
