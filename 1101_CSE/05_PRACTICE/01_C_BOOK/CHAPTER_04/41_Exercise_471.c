// Exercise 4.7.1: Print 1.0 to 10.0 using cast in loop test
#include <stdio.h>

// Entry point of the program
int main(void)
{
    float f;

    for(f = 1.0f; (int)f <= 9; f = f + 0.1f) {
        printf("%f ", f);
    }
    printf("\n");

    return 0;
}
