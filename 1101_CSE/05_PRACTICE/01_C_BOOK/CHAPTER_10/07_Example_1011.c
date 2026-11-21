// Example 10.1.1: Basic structure definition and member access
#include <stdio.h>

struct s_type {
    int a;
    int b;
} s;

// Entry point of the program
int main(void)
{
    s.a = 10;
    s.b = 20;

    printf("%d %d\n", s.a, s.b);

    return 0;
}
