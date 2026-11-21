// Exercise 6.7.2: Function assigning -1 through pointer parameter
#include <stdio.h>

void f(int *p);

// Entry point of the program
int main(void)
{
    int val = 0;

    f(&val);
    printf("val: %d\n", val);

    return 0;
}

// Assigns -1 to integer pointed to by p
void f(int *p)
{
    *p = -1;
}
