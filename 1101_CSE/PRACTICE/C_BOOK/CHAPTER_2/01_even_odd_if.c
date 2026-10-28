#include <stdio.h>

int main()
{
    int a;
    printf("Enter Your Number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("It's An Even Number");
    }
    if (a % 2 != 0)
    {
        printf("It's An Odd Number");
    }
}