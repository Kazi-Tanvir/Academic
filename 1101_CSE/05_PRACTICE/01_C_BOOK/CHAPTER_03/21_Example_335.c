// Example 3.3.5: Multiple control variables in a for loop
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int x, y;

    for(x = 0, y = 0; x + y < 10; ++x) {
        printf("Enter next number for y: ");
        scanf("%d", &y);
        printf("Sum: %d\n", x + y);
    }

    return 0;
}
