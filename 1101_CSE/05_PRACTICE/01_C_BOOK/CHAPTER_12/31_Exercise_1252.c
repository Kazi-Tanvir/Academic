// Exercise 12.5.2: Output of token-pasting program
#include <stdio.h>

#define OUTPUT(a, b) printf(#a " " #b "\n")

// Entry point of the program
int main(void)
{
    OUTPUT(one, two);

    return 0;
}
