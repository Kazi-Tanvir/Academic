// Exercise 8.6.5: Convert hexadecimal input to decimal and octal
#include <stdio.h>

// Entry point of the program
int main(void)
{
    unsigned u;

    printf("Enter hexadecimal number: ");
    if (scanf("%x", &u) == 1) {
        printf("Decimal equivalent: %u\n", u);
        printf("Octal equivalent: %o\n", u);
    }

    return 0;
}
