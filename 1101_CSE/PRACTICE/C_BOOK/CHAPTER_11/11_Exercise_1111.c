/*
Exercise 11.1.1:
Question: Which two variables are the best ones to be made into register variables in the nested loop?
Answer: Variables k and m (or j and k) are the best candidates because they are inside the innermost loop and are accessed the most frequently (k is incremented and compared 100 times per iteration of j, and m is accumulated each time).
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
