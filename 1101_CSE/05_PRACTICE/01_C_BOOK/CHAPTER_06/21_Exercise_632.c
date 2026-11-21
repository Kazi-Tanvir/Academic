// Exercise 6.3.2: Value displayed by *(p + 2)
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int a[5] = {2, 4, 8, 16, 32};
    int *p = a;

    // *(p + 2) accesses a[2]
    printf("%d\n", *(p + 2));

    return 0;
}
