// Example 12.4.2: Using __LINE__ and __FILE__ with #line reset
#include <stdio.h>

// Entry point of the program
int main(void)
{
#line 100 "sample.c"
    printf("At line %d in file %s\n", __LINE__, __FILE__);

    return 0;
}
