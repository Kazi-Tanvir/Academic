// Exercise 5.5.1: Number to English word using string table
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char digits[10][10] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    int num;

    printf("Enter a single digit (0-9): ");
    scanf("%d", &num);

    if(num >= 0 && num <= 9) {
        printf("%s\n", digits[num]);
    }

    return 0;
}
