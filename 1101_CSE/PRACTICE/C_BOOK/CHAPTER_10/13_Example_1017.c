// Example 10.1.7: Passing structure to function by value
#include <stdio.h>

struct s_type {
    int a;
    int b;
};

// Prints structure members passed by value
void show_struct(struct s_type param)
{
    printf("a: %d, b: %d\n", param.a, param.b);
}

// Entry point of the program
int main(void)
{
    struct s_type s;

    s.a = 50;
    s.b = 100;
    show_struct(s);

    return 0;
}
