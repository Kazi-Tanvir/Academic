/*
Exercise 10.1.2:
Question: What is wrong with this fragment?
struct s_type {
    int a;
    char ch;
};
s_type.a = 10;
Answer: s_type is a structure tag name (a type definition), not a variable. Members can only be accessed through an actual structure variable (instance), e.g. struct s_type s; s.a = 10;
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
