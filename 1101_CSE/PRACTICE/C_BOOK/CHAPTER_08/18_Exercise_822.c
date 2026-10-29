/*
Exercise 8.2.2:
Question: What is wrong with this fragment?
char str[80] = "this is a test";
putchar(str);
Answer: putchar() takes a single integer/character value as an argument, not a pointer to a string. Passing a string pointer causes a type error or undefined behavior.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
