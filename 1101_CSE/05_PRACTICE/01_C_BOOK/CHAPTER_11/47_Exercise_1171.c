// Exercise 11.7.1: Preventing division by zero using ? operator
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i = 100, j = 0;
    int answer;

    answer = j ? (i / j) : 0;
    printf("Result of 100 / 0: %d\n", answer);

    j = 5;
    answer = j ? (i / j) : 0;
    printf("Result of 100 / 5: %d\n", answer);

    return 0;
}
