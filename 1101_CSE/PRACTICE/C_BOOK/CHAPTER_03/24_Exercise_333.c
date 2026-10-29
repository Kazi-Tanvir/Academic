// Exercise 3.3.3: Loop counting from 1 to 1000 in steps of 5
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for(i = 1; i <= 1000; i += 5) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
