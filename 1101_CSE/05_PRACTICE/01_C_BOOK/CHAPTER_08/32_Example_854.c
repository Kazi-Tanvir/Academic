// Example 8.5.4: Demonstrating the %n specifier in printf()
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    printf("%d %f\n%n", 100, 123.23, &i);
    printf("%d characters output so far\n", i);

    return 0;
}
