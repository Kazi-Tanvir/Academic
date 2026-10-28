#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter float 1 :");
    scanf("%f", &a);
    printf("Enter float 2 :");
    scanf("%f", &b);

    printf("The sum is %.2f", a+b);

    return 0;
}