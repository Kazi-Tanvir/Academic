// Example 10.1.2: Using sizeof with structures
#include <stdio.h>

struct s_type {
    int a;
    float b;
    char ch;
} s;

// Entry point of the program
int main(void)
{
    printf("Size of struct s_type: %u bytes\n", (unsigned)sizeof(struct s_type));
    printf("Size of variable s: %u bytes\n", (unsigned)sizeof s);

    return 0;
}
