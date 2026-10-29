// Exercise 1.4.1: Compile and run Section 1.4 example
#include <stdio.h>

// Demonstrates reading an int and float from input
int main(void)
{
    int num;
    float f;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a floating point number: ");
    scanf("%f", &f);

    printf("%d %f\n", num, f);

    return 0;
}
