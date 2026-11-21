/*
Exercise 11.3.3:
Question: Is this fragment correct? If not, why not?
enum color {red, green, blue} c;
c = red;
printf("%s", c);
Answer: No. An enumeration constant in C is an integer value, not a string. Passing an enumeration value to %s expects a pointer to char, resulting in a segmentation fault or undefined behavior.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
