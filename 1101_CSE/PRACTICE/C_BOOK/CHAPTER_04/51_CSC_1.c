/*
Cumulative Skills Check 1:
Question: Why is this switch fragment invalid?
switch(ch) {
    case 'A': ...
    case 65: ...
}
Answer: In C, character constants like 'A' are integer values equal to their
ASCII codes ('A' is 65). Therefore, 'case 'A':' and 'case 65:' are duplicate
case constants, which is illegal in a switch statement.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
