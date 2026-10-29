/*
Exercise 4.4.3:
Question: If the declaration 'int a = 1, b = a;' was for local variables,
would it be valid?
Answer: Yes. Local variables can be initialized using any valid expression,
including previously declared and initialized variables.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int a = 1, b = a;

    printf("%d %d\n", a, b);

    return 0;
}
