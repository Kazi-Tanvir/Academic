// Cumulative Skills Check 4: Enclosing array in struct to achieve call-by-value semantics
#include <stdio.h>
#include <string.h>

struct str_holder {
    char str[80];
};

// Demonstrates that modifying struct parameter does not affect caller's copy
void modify_struct(struct str_holder s)
{
    strcpy(s.str, "Modified inside function");
    printf("Inside function: %s\n", s.str);
}

// Entry point of the program
int main(void)
{
    struct str_holder original;

    strcpy(original.str, "Original string value");
    printf("Before function: %s\n", original.str);

    modify_struct(original);

    printf("After function:  %s\n", original.str);

    return 0;
}
