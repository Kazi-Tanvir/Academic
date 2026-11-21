/*
Exercise 7.2.2:
Question: What is wrong with this recursive function?
void f(void) {
    f();
}
Answer: There is no base condition to terminate the recursion. It results
in infinite recursion until stack overflow crashes the program.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
