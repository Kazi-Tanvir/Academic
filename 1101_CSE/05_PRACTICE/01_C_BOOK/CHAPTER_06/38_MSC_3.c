/*
Mastery Skills Check 3:
Question: Is this fragment correct?
char *p;
scanf("%s", p);
Answer: No. The pointer p is uninitialized and does not point to valid
allocated memory. Using it to store input leads to memory corruption.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
