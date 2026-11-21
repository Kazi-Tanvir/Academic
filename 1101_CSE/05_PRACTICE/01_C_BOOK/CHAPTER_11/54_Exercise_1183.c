// Exercise 11.8.3: Even multiples of 17 from 17 to 1000
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for (i = 17; i <= 1000; i += 17) {
        if (!(i % 2)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
