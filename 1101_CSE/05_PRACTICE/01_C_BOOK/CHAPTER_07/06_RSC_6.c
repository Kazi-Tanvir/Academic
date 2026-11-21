// Review Skills Check 6: Output of pointer expression
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char *p = "ABC";

    // Displays 'C'
    printf("%c\n", *(p + 2));

    return 0;
}
