// Exercise 2.1.2: Check if an integer is even or odd using modulus
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if((num % 2) == 0) printf("Even");
    if((num % 2) != 0) printf("Odd");

    return 0;
}
