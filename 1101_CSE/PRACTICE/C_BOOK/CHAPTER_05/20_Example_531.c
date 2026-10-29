// Example 5.3.1: Two-dimensional array storing student grades
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int grades[3][4] = {
        {80, 85, 90, 95},
        {70, 75, 80, 85},
        {90, 92, 94, 96}
    };
    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }

    return 0;
}
