// Example 2.7.1: Idiomatic true/false conditions
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int count = 5;

    if(count) printf("count is nonzero (true)\n");
    if(!count) printf("count is zero (false)\n");

    return 0;
}
