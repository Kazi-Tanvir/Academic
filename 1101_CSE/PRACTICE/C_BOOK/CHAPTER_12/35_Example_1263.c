// Example 12.6.3: Generic array sorting with qsort()
#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort()
int comp(const void *i, const void *j)
{
    return *(const int *)i - *(const int *)j;
}

// Entry point of the program
int main(void)
{
    int sort[10] = {50, 20, 80, 10, 90, 30, 70, 40, 60, 100};
    int i;

    qsort(sort, 10, sizeof(int), comp);

    for (i = 0; i < 10; i++) {
        printf("%d ", sort[i]);
    }
    printf("\n");

    return 0;
}
