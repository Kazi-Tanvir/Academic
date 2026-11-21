/*
Exercise 4.2.1:
Question: What are key differences between local and global variables?
Answer:
1. Scope: Local variables are visible only within the block/function they are declared in.
   Global variables are visible to all functions throughout the file.
2. Lifetime: Local variables are created upon function entry and destroyed upon exit.
   Global variables exist throughout the entire execution lifetime of the program.
3. Storage: Local variables reside on the stack; global variables in static memory.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
