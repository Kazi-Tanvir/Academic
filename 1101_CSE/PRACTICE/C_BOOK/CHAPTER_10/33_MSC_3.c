/*
Mastery Skills Check 3:
Question: What is wrong with this fragment?
struct s_type {
    int a;
    char ch;
} *p;
p.a = 10;
Answer: p is declared as a pointer to struct s_type. To access a member of a structure through a pointer, the arrow operator (->) must be used instead of the dot operator: p->a = 10;
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
