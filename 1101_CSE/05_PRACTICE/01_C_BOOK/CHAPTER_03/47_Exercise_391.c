/*
Exercise 3.9.1:
Question: What is wrong with this fragment?
switch(c) {
    case 1: ...
    case 2: ...
    case 1: ...
}
Answer: The switch statement has duplicate case constants (two 'case 1:' labels).
In C, all case constants within a switch must be unique.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
