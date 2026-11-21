// Exercise 3.6.1: Prime numbers between 2 and 1000 using nested loops
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int num, i, is_prime;

    for(num = 2; num <= 1000; num++) {
        is_prime = 1;
        for(i = 2; i <= num / 2; i++) {
            if((num % i) == 0) {
                is_prime = 0;
                break;
            }
        }
        if(is_prime) printf("%d ", num);
    }
    printf("\n");

    return 0;
}
