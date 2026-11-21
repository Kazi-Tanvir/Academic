/*
Mastery Skills Check 2:
Question: What do the const and volatile modifiers do?
Answer:
- const tells the compiler that the modified variable cannot be changed after initialization. For pointers, const prevents modification of the target object.
- volatile tells the compiler that the variable's value may change at any time due to external factors (such as hardware registers or interrupt routines) and disables caching optimizations on it.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
