/*
Review Skills Check 3:
Question: What does this fragment display? (Assume two-byte ints and eight-byte doubles)
union u_type {
    int i;
    double d;
} u;
u.d = 100.00;
u.i = 10;
printf("%f", u.d);
Answer: The output will be unpredictable / garbage (undefined value) because the integer assignment u.i = 10 overwrote the low-order bytes of the floating-point representation of u.d.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
