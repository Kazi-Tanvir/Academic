// Example 7.1.1: Prototype catching type mismatch errors
#include <stdio.h>

float get_num(void);

// Entry point of the program
int main(void)
{
    float val;

    val = get_num();
    printf("%f\n", val);

    return 0;
}

// Returns a float value
float get_num(void)
{
    return 123.456f;
}
