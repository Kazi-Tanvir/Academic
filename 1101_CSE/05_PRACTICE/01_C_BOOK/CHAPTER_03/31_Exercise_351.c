// Exercise 3.5.1: Gallons to liters converter with do-while loop
#include <stdio.h>

// Entry point of the program
int main(void)
{
    float gallons;
    char repeat;

    do {
        printf("Enter gallons: ");
        scanf("%f", &gallons);
        printf("Liters: %f\n", gallons * 3.7854f);

        printf("Convert another? (y/n): ");
        scanf(" %c", &repeat);
    } while(repeat == 'y' || repeat == 'Y');

    return 0;
}
