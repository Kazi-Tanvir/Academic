// Example 6.5.1: Array of pointers to strings
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char *fruits[4] = {
        "Apple", "Banana", "Cherry", "Date"
    };

    for(int i = 0; i < 4; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}
