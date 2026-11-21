// Example 4.1.1: Input and output short, long, and unsigned integers
#include <stdio.h>

// Entry point of the program
int main(void)
{
    short int si;
    long int li;
    unsigned int ui;

    printf("Enter a short, long, and unsigned integer: ");
    scanf("%hd %ld %u", &si, &li, &ui);
    printf("%hd %ld %u\n", si, li, ui);

    return 0;
}
