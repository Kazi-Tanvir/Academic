// Example 12.7.2: Dynamically allocated character array
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char *p;

    p = malloc(80);
    if (!p) {
        printf("Allocation Failed\n");
        exit(1);
    }

    strcpy(p, "Dynamic string allocation test");
    printf("%s\n", p);
    free(p);

    return 0;
}
