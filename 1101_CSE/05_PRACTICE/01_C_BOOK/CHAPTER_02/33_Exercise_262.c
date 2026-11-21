// Exercise 2.6.2: Countdown from input value to 0 sounding bell
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int num, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(j = num; j > 0; j--) {
        printf("%d\n", j);
    }
    printf("\a");

    return 0;
}
