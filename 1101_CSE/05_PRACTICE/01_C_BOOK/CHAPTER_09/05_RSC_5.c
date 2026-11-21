// Review Skills Check 5: Read and discard leading digits, then read string
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80];

    printf("Enter string with possible leading digits: ");
    if (scanf("%*[0-9]%79s", str) == 1) {
        printf("Resulting string: %s\n", str);
    }

    return 0;
}
