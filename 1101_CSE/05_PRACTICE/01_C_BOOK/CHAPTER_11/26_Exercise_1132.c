// Exercise 11.3.2: Enumeration of coins of the U.S.
#include <stdio.h>

enum money {penny, nickel, dime, quarter, half_dollar, dollar};

// Entry point of the program
int main(void)
{
    enum money coin = quarter;
    printf("Coin enum value for quarter: %d\n", coin);

    return 0;
}
