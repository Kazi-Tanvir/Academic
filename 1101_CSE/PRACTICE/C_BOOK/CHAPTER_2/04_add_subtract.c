#include <stdio.h>

int calc(int a, int b, char c)
{
    if (c == '+')
    {
        return a + b;
    }
    else if (c == '-')
    {
        return a - b;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a, b;
    char c;
    printf("Choose 2 number and operation that you want to perform :");
    scanf("%d %c %d", &a, &c, &b);
    printf("%d %c %d = %d", a, c, b, calc(a, b, c));
}