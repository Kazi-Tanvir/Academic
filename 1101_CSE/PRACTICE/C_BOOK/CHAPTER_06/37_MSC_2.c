// Mastery Skills Check 2: Assign value to variable indirectly through pointer
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i, *p;

    p = &i;
    *p = 100;

    printf("%d\n", i);

    return 0;
}
