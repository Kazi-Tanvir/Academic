// Exercise 1.4.2: Input two floats and display their sum
#include <stdio.h>

// Entry point of the program
int main(void)
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("Their sum is %f.", a + b);

    return 0;
}
