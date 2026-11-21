// Example 9.8.2: Input redirection demonstration reading from stdin
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i = 42;

    // Read integer if available from stdin
    if (scanf("%d", &i) == 1) {
        printf("Read: %d\n", i);
    } else {
        printf("Value: %d\n", i);
    }

    return 0;
}
