// Example 3.8.1: Using continue to restart on input mismatch
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int total = 0, i, j;

    do {
        printf("Enter next number (0 to stop): ");
        scanf("%d", &i);
        printf("Enter number again: ");
        scanf("%d", &j);

        if(i != j) {
            printf("Mismatch\n");
            continue;
        }
        total += i;
    } while(i);

    printf("Total is %d\n", total);

    return 0;
}
