// Example 7.2.3: Mutually recursive functions f1 and f2
#include <stdio.h>

void f1(int a);
void f2(int b);

// Entry point of the program
int main(void)
{
    f1(10);
    printf("\n");

    return 0;
}

// First mutually recursive function
void f1(int a)
{
    if(a) f2(a - 1);
    printf("%d ", a);
}

// Second mutually recursive function
void f2(int b)
{
    printf(".");
    if(b) f1(b - 1);
}
