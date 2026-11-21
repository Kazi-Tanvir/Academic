// Example 11.1.3: Static local variable for one-time initialization
#include <stdio.h>

// Function that performs initialization only on first call
void myfunc(void)
{
    static int first = 1;

    if (first) {
        printf("System Initialized\n");
        first = 0;
    } else {
        printf("System already initialized.\n");
    }
}

// Entry point of the program
int main(void)
{
    myfunc();
    myfunc();
    myfunc();

    return 0;
}
