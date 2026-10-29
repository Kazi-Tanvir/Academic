// Exercise 4.3.2: Read and write a long int value
#include <stdio.h>

// Entry point of the program
int main(void)
{
    long int val;

    printf("Enter a long integer: ");
    scanf("%ld", &val);
    printf("Value: %ld\n", val);

    return 0;
}
