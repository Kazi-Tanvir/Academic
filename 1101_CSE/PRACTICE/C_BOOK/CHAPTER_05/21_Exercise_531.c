// Exercise 5.3.1: 3x3x3 three-dimensional array loaded with numbers 1 to 27
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int three_d[3][3][3];
    int i, j, k, x = 1;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                three_d[i][j][k] = x++;
                printf("%d ", three_d[i][j][k]);
            }
        }
    }
    printf("\n");

    return 0;
}
