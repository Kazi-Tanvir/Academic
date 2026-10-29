/*
Exercise 10.2.1:
Question: Is this program fragment correct?
struct s_type {
    int a;
    char ch;
} *p;
p.a = 100;
Answer: No. Since p is a pointer to a structure, you must use the arrow operator (->), not the dot operator (.): p->a = 100; (or (*p).a = 100;).
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
