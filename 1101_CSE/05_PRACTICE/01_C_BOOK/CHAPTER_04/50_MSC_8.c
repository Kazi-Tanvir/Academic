/*
Mastery Skills Check 8:
Question: What is a type cast? Give an example.
Answer: A type cast is an explicit instruction to convert an expression
temporarily to a specified data type.
Example: (float) x / y;
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int x = 5, y = 2;
    float result = (float)x / (float)y;

    printf("result: %f\n", result);

    return 0;
}
