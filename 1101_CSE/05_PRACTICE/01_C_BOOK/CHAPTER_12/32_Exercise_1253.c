// Exercise 12.5.3: Macro generating variable names and debug prints
#include <stdio.h>

#define MAKE_VAR(name, id) name ## id
#define TRACE(x) printf("Variable " #x " = %d\n", x)

// Entry point of the program
int main(void)
{
    int MAKE_VAR(var_, 1) = 99;
    TRACE(var_1);

    return 0;
}
