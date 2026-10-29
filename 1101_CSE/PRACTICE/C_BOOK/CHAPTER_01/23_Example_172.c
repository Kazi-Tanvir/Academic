// Example 1.7.2: Three functions calling sequentially
#include <stdio.h>

void func1(void);
void func2(void);

// Calls func2 and prints 3
int main(void)
{
    func2();
    printf("3");

    return 0;
}

// Calls func1 and prints 2
void func2(void)
{
    func1();
    printf("2 ");
}

// Prints 1
void func1(void)
{
    printf("1 ");
}
