// Example 7.1.2: Function defined prior to main does not require separate prototype
#include <stdio.h>

// Function definition serving as its own prototype
float get_val(void)
{
    return 10.5f;
}

// Entry point of the program
int main(void)
{
    printf("%f\n", get_val());

    return 0;
}
