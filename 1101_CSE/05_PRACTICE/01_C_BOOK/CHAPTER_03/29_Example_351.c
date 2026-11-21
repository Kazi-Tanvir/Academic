// Example 3.5.1: Do-while loop reading numbers until value <= 100
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int num;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
    } while(num > 100);

    return 0;
}
