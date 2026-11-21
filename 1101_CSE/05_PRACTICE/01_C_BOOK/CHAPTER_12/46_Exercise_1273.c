/*
Exercise 12.7.3:
Question: What is wrong with this fragment?
char *p;
*p = malloc(10);
gets(p);
Answer: *p dereferences the uninitialized pointer p, attempting to assign the pointer returned by malloc() to a char. The correct statement is p = malloc(10); without dereferencing p.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
