// Mastery Skills Check 2: Nested if for positive, zero, or negative
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 0) {
        if(num == 0) printf("Number is zero.\n");
        else printf("Number is positive.\n");
    } else {
        printf("Number is negative.\n");
    }

    return 0;
}
