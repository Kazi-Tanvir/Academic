// Exercise 3.4.1: Driving time calculator rewritten using while loop
#include <stdio.h>

// Entry point of the program
int main(void)
{
    float distance, speed;
    char choice = 'y';

    while(choice != 'n') {
        printf("Enter distance: ");
        scanf("%f", &distance);
        printf("Enter speed: ");
        scanf("%f", &speed);

        if(speed > 0.0f) {
            printf("Time: %f hours\n", distance / speed);
        }

        printf("Calculate another trip? (y/n): ");
        scanf(" %c", &choice);
    }

    return 0;
}
