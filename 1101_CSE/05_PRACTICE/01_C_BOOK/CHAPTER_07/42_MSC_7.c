// Mastery Skills Check 7: Old-style function declaration for myfunc
#include <stdio.h>

// Demonstrates old-style function declaration
double myfunc(x, y, ch)
int x, y;
char ch;
{
    return (double)(x + y + ch);
}

// Entry point of the program
int main(void)
{
    printf("Result: %f\n", myfunc(2, 3, 'a'));

    return 0;
}
