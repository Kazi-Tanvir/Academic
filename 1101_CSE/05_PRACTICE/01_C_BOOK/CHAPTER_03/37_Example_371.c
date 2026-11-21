// Example 3.7.1: Using break to exit a loop
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for(i = 1; i < 100; i++) {
        printf("%d ", i);
        if(i == 10) break;
    }

    return 0;
}
