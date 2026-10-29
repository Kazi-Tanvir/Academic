// Example 10.1.6: Function returning a structure
#include <stdio.h>

struct s_type {
    int a;
    double d;
};

// Returns an initialized structure
struct s_type make_struct(int a, double d)
{
    struct s_type temp;
    temp.a = a;
    temp.d = d;
    return temp;
}

// Entry point of the program
int main(void)
{
    struct s_type s;

    s = make_struct(100, 29.95);
    printf("a: %d, d: %f\n", s.a, s.d);

    return 0;
}
