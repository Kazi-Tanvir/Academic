// Review Skills Check 3: Four-column table of prime numbers between 2 and 1000
#include <stdio.h>

// Checks whether an integer is prime
int isprime(int i)
{
    int j;

    for (j = 2; j <= i / 2; j++) {
        if (!(i % j)) return 0;
    }
    return 1;
}

// Entry point of the program
int main(void)
{
    int i, count = 0;

    for (i = 2; i <= 1000; i++) {
        if (isprime(i)) {
            printf("%10d", i);
            count++;
            if (count == 4) {
                printf("\n");
                count = 0;
            }
        }
    }
    if (count != 0) printf("\n");

    return 0;
}
