// Exercise 12.6.2: Searching a sorted array with bsearch()
#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort() and bsearch()
int comp(const void *i, const void *j)
{
    return *(const int *)i - *(const int *)j;
}

// Entry point of the program
int main(void)
{
    int sort[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int key = 40;
    int *p;

    p = (int *)bsearch(&key, sort, 10, sizeof(int), comp);

    if (p) {
        printf("Found %d in array at offset %ld.\n", key, (long)(p - sort));
    } else {
        printf("%d not found in array.\n", key);
    }

    return 0;
}
