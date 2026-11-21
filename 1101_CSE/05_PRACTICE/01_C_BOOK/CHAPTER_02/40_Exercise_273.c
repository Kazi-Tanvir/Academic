/*
Exercise 2.7.3:
Question: Do these two expressions evaluate to the same outcome?
a. 0 && 1 || 1
b. 0 && (1 || 1)
Answer: No. In expression a, && has higher precedence than ||, evaluating to
(0 && 1) || 1 -> 0 || 1 -> 1 (true).
In expression b, parentheses force || first, evaluating to
0 && (1 || 1) -> 0 && 1 -> 0 (false).
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
