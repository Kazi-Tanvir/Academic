// Exercise 2.4.3: Display all factors of a number
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int num, i;

    printf("Enter number: ");
    scanf("%d", &num);

    for(i = 2; i <= num / 2; i = i + 1) {
        if((num % i) == 0) printf("%d ", i);
    }

    return 0;
}
