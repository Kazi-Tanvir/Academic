// Exercise 8.1.1: Count from 0 to MAX-1 by COUNTBY
#include <stdio.h>

#define MAX 100
#define COUNTBY 3

// Entry point of the program
int main(void)
{
    int i;

    for (i = 0; i < MAX; i++) {
        if (!(i % COUNTBY)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
