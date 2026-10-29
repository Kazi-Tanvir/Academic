// Exercise 8.6.2: Read floating-point number as string using scanset
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char num[80];

    printf("Enter a floating point number: ");
    if (scanf("%79[0-9.]", num) == 1) {
        printf("%s\n", num);
    }

    return 0;
}
