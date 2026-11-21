// Review Skills Check 4: Input double, char, and string <= 20 chars
#include <stdio.h>

// Entry point of the program
int main(void)
{
    double d;
    char ch;
    char str[21];

    printf("Enter a double, a character, and a string (max 20 chars):\n");
    if (scanf("%lf %c %20s", &d, &ch, str) == 3) {
        printf("Double: %f, Char: %c, String: %s\n", d, ch, str);
    }

    return 0;
}
