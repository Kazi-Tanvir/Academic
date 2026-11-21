// Review Skills Check 3: Input a long, short, and double
#include <stdio.h>

// Entry point of the program
int main(void)
{
    long l;
    short s;
    double d;

    printf("Enter a long value: ");
    scanf("%ld", &l);

    printf("Enter a short value: ");
    scanf("%hd", &s);

    printf("Enter a double value: ");
    scanf("%lf", &d);

    printf("%ld %hd %f\n", l, s, d);

    return 0;
}
