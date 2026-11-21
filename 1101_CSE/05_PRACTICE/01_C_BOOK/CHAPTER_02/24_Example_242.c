// Example 2.4.2: Prime number tester using a for loop
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int num, i, is_prime;

    printf("Enter the number to test: ");
    scanf("%d", &num);

    is_prime = 1;
    for(i = 2; i <= num / 2; i = i + 1)
        if((num % i) == 0) is_prime = 0;

    if(is_prime == 1) printf("The number is prime.");
    else printf("The number is not prime.");

    return 0;
}
