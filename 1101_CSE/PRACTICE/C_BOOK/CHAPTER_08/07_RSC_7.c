/*
Review Skills Check 7:
Question: How is this declaration coded using the old-style function declaration?
float func(int a, char ch, double d) { ... }
Answer:
float func(a, ch, d)
int a;
char ch;
double d;
{
    / * function body * /
}
*/
#include <stdio.h>

// Demonstrates old-style K&R function declaration
float func(a, ch, d)
int a;
char ch;
double d;
{
    return (float)(a + ch + d);
}

// Entry point of the program
int main(void)
{
    printf("%f\n", func(1, 'A', 2.5));

    return 0;
}
