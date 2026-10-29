// Example 3.3.3: For loop with empty body as time-delay
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    // Empty body loop
    for(i = 0; i < 1000; i++) ;

    printf("Done delay.\n");

    return 0;
}
