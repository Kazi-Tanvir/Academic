/*
Exercise 8.1.2:
Question: Is this fragment correct?
#define MAX MIN+100
#define MIN 10
Answer: No. A macro cannot be defined in terms of another macro before the second macro is defined. MIN is undefined at the point MAX is defined.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
