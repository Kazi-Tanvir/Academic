// Mastery Skills Check 6: Prototype for myfunc(int x, int y, char ch)
#include <stdio.h>

double myfunc(int x, int y, char ch);

// Entry point of the program
int main(void)
{
    printf("Result: %f\n", myfunc(2, 3, 'a'));

    return 0;
}

// Demonstrates prototyped function
double myfunc(int x, int y, char ch)
{
    return (double)(x + y + ch);
}
