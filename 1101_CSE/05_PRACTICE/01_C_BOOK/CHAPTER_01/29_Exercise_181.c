// Exercise 1.8.1: Compile and run Section 1.8 examples
#include <stdio.h>

int get_val(void);

// Calls get_val and displays the return value
int main(void)
{
    printf("Returned: %d\n", get_val());

    return 0;
}

// Returns a constant value
int get_val(void)
{
    return 42;
}
