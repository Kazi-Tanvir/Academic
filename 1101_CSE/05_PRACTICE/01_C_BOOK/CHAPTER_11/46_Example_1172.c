// Example 11.7.2: Computerized coin toss using ternary operator
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    int coin;

    coin = rand() % 2;
    printf("Coin landed on: %s\n", coin ? "HEADS" : "TAILS");

    return 0;
}
