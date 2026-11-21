/*
Exercise 7.3.1:
Question: Is this program correct?
void myfunc(int *p);
int main(void) {
    int i;
    myfunc(i);
    ...
}
Answer: No. myfunc() expects an int pointer (int *), but is called with
an integer value (i). It must be called with the address of i: myfunc(&i).
*/
#include <stdio.h>

void myfunc(int *p);

// Entry point of the program
int main(void)
{
    int i = 5;

    myfunc(&i);
    printf("%d\n", i);

    return 0;
}

// Multiplies variable by 2
void myfunc(int *p)
{
    *p = *p * 2;
}
