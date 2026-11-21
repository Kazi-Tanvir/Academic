// Example 8.1.1: Macro name in place of a quoted string
#include <stdio.h>

#define FUN "Macro Substitutions are Fun"

// Entry point of the program
int main(void)
{
    printf("%s\n", FUN);

    return 0;
}
