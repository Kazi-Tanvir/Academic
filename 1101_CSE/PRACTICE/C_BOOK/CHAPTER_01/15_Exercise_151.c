// Exercise 1.5.1: Computing the volume of a cube/box
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int len, width, height;

    printf("Enter length: ");
    scanf("%d", &len);
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);

    printf("Volume is %d.", len * width * height);

    return 0;
}
