// Example 2.1.2: Unit converter between feet and meters
#include <stdio.h>

// Entry point of the program
int main(void)
{
    float num;
    int choice;

    printf("Enter value: ");
    scanf("%f", &num);

    printf("1: Feet to Meters, 2: Meters to Feet. ");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) printf("%f", num / 3.28f);
    if(choice == 2) printf("%f", num * 3.28f);

    return 0;
}
