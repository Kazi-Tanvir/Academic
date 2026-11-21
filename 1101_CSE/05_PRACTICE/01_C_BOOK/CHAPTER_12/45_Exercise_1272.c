// Exercise 12.7.2: Ten-element dynamic integer array
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    int *p, i;

    p = malloc(10 * sizeof(int));
    if (!p) {
        printf("Allocation Error\n");
        exit(1);
    }

    for (i = 0; i < 10; i++) p[i] = i + 1;

    for (i = 0; i < 10; i++) printf("%d ", *(p + i));
    printf("\n");

    free(p);

    return 0;
}
