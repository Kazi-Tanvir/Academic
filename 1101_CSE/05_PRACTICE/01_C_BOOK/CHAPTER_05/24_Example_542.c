// Example 5.4.2: Initialized array elements can be altered
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char p[80] = "This is a test.";

    printf("%s\n", p);
    p[0] = 't';
    printf("%s\n", p);

    return 0;
}
