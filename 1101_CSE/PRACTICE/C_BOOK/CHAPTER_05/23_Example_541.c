// Example 5.4.1: Lookup table with initialized array
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int sqrs[10][2] = {
        {1, 1}, {2, 4}, {3, 9}, {4, 16}, {5, 25},
        {6, 36}, {7, 49}, {8, 64}, {9, 81}, {10, 100}
    };
    int i, num;

    printf("Enter a number (1-10): ");
    scanf("%d", &num);

    for(i = 0; i < 10; i++) {
        if(sqrs[i][0] == num) {
            printf("Square of %d is %d\n", num, sqrs[i][1]);
            break;
        }
    }

    return 0;
}
