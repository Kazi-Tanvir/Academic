// Example 8.3.2: Sales-tax table with keyboard interrupt check using kbhit()
#include <stdio.h>
#include <conio.h>

// Entry point of the program
int main(void)
{
    double amount;

    amount = 0.20;

    cprintf("Printing 5-percent tax table\n\r");
    cprintf("Press a key to stop.\n\n\r");
    do {
        cprintf("amount: %f, tax: %f\n\r", amount, amount * 0.05);
        if (kbhit()) break;
        amount = amount + 0.20;
    } while (amount < 100.0);

    return 0;
}
