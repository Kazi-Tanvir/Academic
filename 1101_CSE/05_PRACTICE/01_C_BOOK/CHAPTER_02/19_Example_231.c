// Example 2.3.1: Unit converter using code blocks
#include <stdio.h>

// Entry point of the program
int main(void)
{
    float num;
    int choice;

    printf("1: Feet to Meters, 2: Meters to Feet. ");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter number of feet: ");
        scanf("%f", &num);
        printf("Meters: %f", num / 3.28f);
    }
    else {
        printf("Enter number of meters: ");
        scanf("%f", &num);
        printf("Feet: %f", num * 3.28f);
    }

    return 0;
}
