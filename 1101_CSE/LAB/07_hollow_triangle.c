#include <stdio.h>

int main()
{
    int height;
    printf("Enter Your Pyramid Height : ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++)
    {

        for (int j = height - i; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2*i - 1); j++)
        {
            if(i == height|| j==1 || j == 2*i-1 || i ==1){

                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}