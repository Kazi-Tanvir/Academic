// Exercise 8.6.4: Input string, double, int, and count characters read using %n
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80];
    double d;
    int i, num;

    printf("Enter a string, a double, and an integer: ");
    if (scanf("%79s%lf%d%n", str, &d, &i, &num) == 3) {
        printf("Number of characters read: %d\n", num);
    }

    return 0;
}
