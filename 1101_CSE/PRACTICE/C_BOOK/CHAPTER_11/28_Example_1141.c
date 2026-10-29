// Example 11.4.1: typedef defining new type names based on existing ones
#include <stdio.h>

typedef int my_int;
typedef my_int also_int;

// Entry point of the program
int main(void)
{
    also_int a = 100;
    printf("a = %d\n", a);

    return 0;
}
