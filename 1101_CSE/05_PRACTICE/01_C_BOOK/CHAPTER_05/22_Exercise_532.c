// Exercise 5.3.2: Sum of all elements in 3x3x3 array
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int three_d[3][3][3];
    int i, j, k, sum = 0, x = 1;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                three_d[i][j][k] = x++;
                sum += three_d[i][j][k];
            }
        }
    }

    printf("Sum: %d\n", sum);

    return 0;
}
