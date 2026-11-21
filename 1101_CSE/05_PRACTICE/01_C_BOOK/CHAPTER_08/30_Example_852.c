// Example 8.5.2: Minimum field width for column alignment
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    int i;

    for (i = 0; i < 20; i++) {
        printf("%10d %10d %10d\n", rand(), rand(), rand());
    }

    return 0;
}
