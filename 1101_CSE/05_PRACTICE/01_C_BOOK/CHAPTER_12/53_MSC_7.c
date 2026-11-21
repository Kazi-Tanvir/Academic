// Mastery Skills Check 7: Sort string using qsort()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Compares two characters for qsort()
int comp(const void *a, const void *b)
{
    return *(const char *)a - *(const char *)b;
}

// Entry point of the program
int main(void)
{
    char str[] = "this is a test of qsort";

    qsort(str, strlen(str), sizeof(char), comp);
    printf("Sorted string: \"%s\"\n", str);

    return 0;
}
