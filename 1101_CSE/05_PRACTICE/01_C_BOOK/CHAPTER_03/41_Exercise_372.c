// Exercise 3.7.2: Loan interest payment table
#include <stdio.h>

// Entry point of the program
int main(void)
{
    float principal, payment;
    int month = 1;

    principal = 1000.0f;
    payment = 100.0f;

    while(principal > 0.0f) {
        principal = principal + (principal * 0.015f);
        principal = principal - payment;
        if(principal <= 0.0f) {
            printf("Month %d: Paid off!\n", month);
            break;
        }
        printf("Month %d: Balance = %f\n", month, principal);
        month++;
    }

    return 0;
}
