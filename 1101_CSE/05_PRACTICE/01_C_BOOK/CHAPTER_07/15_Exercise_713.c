/*
Exercise 7.1.3:
Question: Is the program correct?
Answer: The program is syntactically valid in traditional C, but omitting
parameter types in the prototype (using myfunc() instead of myfunc(int, float))
prevents the compiler from checking argument types.
*/
#include <stdio.h>

void myfunc(int a, float b);

// Entry point of the program
int main(void)
{
    myfunc(10, 20.5f);

    return 0;
}

// Demonstrates prototyped function
void myfunc(int a, float b)
{
    printf("%d %f\n", a, b);
}
