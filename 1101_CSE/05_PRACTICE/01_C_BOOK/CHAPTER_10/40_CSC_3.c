/*
Cumulative Skills Check 3:
Question: What is wrong with this fragment?
struct s_type {
    int a;
    int b: 2;
    int c: 6;
} var;
scanf("%d", &var);
Answer: scanf() format %d expects a pointer to an int, but &var is a pointer to struct s_type. Passing the address of an entire structure violates type constraints and causes undefined behavior. To input member a, one must pass &var.a.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
