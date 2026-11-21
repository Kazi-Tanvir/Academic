/*
Exercise 4.5.1:
Question: Given char ch, short int i, unsigned long int ul, float f,
double d, long double ld, what is the type of the expression:
(ch / i) + (ul * f) - (d + ld)
Answer: The entire expression evaluates to long double, because ld is of type
long double, which is the highest type in the conversion hierarchy.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
