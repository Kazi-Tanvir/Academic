/*
Review Skills Check 3:
Question: Is this fragment correct?
char *p;
p = "this is a string";
Answer: Yes. The compiler creates an entry in the string table for the literal
and assigns the address of its first character to pointer p.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char *p = "this is a string";

    printf("%s\n", p);

    return 0;
}
