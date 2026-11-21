/*
Exercise 12.2.2:
Question: Is this fragment correct? If not, show one way to fix it:
#if MAX < 10
    / * ... * /
#else MAX > 10
    / * ... * /
#endif
Answer: No. The #else directive cannot take an expression. To test a condition on an alternative branch, use #elif MAX > 10 instead of #else.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
