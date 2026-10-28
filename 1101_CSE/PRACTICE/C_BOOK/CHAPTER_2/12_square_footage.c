#include <stdio.h>

int main()
{
    int room, square_footage = 0;
    printf("Enter Number of room :");
    scanf("%d", &room);
    printf("\n");

    for (int i = 0; i < room; i++)
    {
        int length, width;
        printf("Enter the Length of room %d : ", i + 1);
        scanf("%d", &length);
        printf("Enter the width of room %d : ", i + 1);
        scanf("%d", &width);
        square_footage = square_footage + length * width;
        printf("Square Footage for room %d is %d \n\n", i + 1, length * width);
    }
    printf("Total Square Footage is : %d", square_footage);
}