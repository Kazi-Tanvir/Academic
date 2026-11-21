// Example 1.4.1: Inputting an integer and a float using scanf
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int num;
    float f;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a floating point number: ");
    scanf("%f", &f);

    printf("%d ", num);
    printf("%f", f);

    return 0;
}
