// Review Skills Check 1: Sum of even and odd numbers in array
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int num[10], i, even = 0, odd = 0;

    printf("Enter 10 integers: ");
    for(i = 0; i < 10; i++) scanf("%d", &num[i]);

    for(i = 0; i < 10; i++) {
        if(num[i] % 2) odd += num[i];
        else even += num[i];
    }

    printf("Sum of even numbers: %d\n", even);
    printf("Sum of odd numbers: %d\n", odd);

    return 0;
}
