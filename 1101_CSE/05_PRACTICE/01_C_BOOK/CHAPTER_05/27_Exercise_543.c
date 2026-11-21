// Exercise 5.4.3: 10x3 initialized table with number, square, and cube
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int cube[10][3] = {
        {1, 1, 1},
        {2, 4, 8},
        {3, 9, 27},
        {4, 16, 64},
        {5, 25, 125},
        {6, 36, 216},
        {7, 49, 343},
        {8, 64, 512},
        {9, 81, 729},
        {10, 100, 1000}
    };
    int num, i;

    printf("Enter cube value: ");
    scanf("%d", &num);

    for(i = 0; i < 10; i++) {
        if(cube[i][2] == num) {
            printf("Root: %d, Square: %d\n", cube[i][0], cube[i][1]);
            break;
        }
    }
    if(i == 10) printf("Cube not found\n");

    return 0;
}
