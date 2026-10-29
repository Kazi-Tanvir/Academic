/*
Review Skills Check 4:
Question: What is wrong with this fragment?
struct s_type {
    int a;
    double b;
} s;
s = 10;
Answer: A structure variable cannot be assigned a primitive scalar value directly. You must assign values to individual members (e.g. s.a = 10;), or assign another structure of the same type.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
