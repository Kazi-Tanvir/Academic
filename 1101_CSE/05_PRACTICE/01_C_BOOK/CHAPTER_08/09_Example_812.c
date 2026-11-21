// Example 8.1.2: Defining macros in terms of other macros
#include <stdio.h>

#define SMALL 1
#define MEDIUM SMALL+1
#define LARGE MEDIUM+1

// Entry point of the program
int main(void)
{
    printf("%d %d %d\n", SMALL, MEDIUM, LARGE);

    return 0;
}
