// Review Skills Check 10: Prototype for Myfunc()
#include <stdio.h>

void Myfunc(int count, float balance, char ch);

// Calls Myfunc with sample arguments
int main(void)
{
    Myfunc(10, 99.5f, 'A');

    return 0;
}

// Demonstrates the prototyped function
void Myfunc(int count, float balance, char ch)
{
    printf("%d %f %c\n", count, balance, ch);
}
