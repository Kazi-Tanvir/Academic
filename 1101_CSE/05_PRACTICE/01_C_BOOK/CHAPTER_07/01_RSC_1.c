/*
Review Skills Check 1:
Question: What does this fragment do?
int *p, i;
p = &i;
*p = 19;
Answer: It assigns the value 19 to variable i indirectly using pointer p.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int *p, i;

    p = &i;
    *p = 19;

    printf("i: %d\n", i);

    return 0;
}
