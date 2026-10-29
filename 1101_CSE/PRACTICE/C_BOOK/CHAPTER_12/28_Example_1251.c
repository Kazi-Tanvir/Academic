// Example 12.5.1: The # stringize operator
#include <stdio.h>

#define MKSTR(s) #s

// Entry point of the program
int main(void)
{
    printf("%s\n", MKSTR(This is a string created by the # operator));

    return 0;
}
