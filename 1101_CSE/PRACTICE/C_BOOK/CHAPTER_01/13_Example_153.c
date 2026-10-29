// Example 1.5.3: Computing the area of a rectangle
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int len, width;

    printf("Enter length: ");
    scanf("%d", &len);
    printf("Enter width: ");
    scanf("%d", &width);

    printf("Area is %d", len * width);

    return 0;
}
