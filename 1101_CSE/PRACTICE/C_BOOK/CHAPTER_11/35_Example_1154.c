// Example 11.5.4: Bitwise AND to determine odd or even
#include <stdio.h>

// Returns 1 if number is odd, 0 if even
int is_odd(int num)
{
    return num & 1;
}

// Entry point of the program
int main(void)
{
    printf("10 is %s\n", is_odd(10) ? "odd" : "even");
    printf("11 is %s\n", is_odd(11) ? "odd" : "even");

    return 0;
}
