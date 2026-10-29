// Example 11.1.1: Timing register vs non-register loop using clock()
#include <stdio.h>
#include <time.h>

int i;

// Entry point of the program
int main(void)
{
    register int j;
    int k;
    clock_t start, finish;

    start = clock();
    for (k = 0; k < 100; k++)
        for (i = 0; i < 32000; i++) ;
    finish = clock();
    printf("Non-register loop: %ld ticks\n", (long)(finish - start));

    start = clock();
    for (k = 0; k < 100; k++)
        for (j = 0; j < 32000; j++) ;
    finish = clock();
    printf("Register loop: %ld ticks\n", (long)(finish - start));

    return 0;
}
