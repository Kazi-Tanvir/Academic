// Exercise 3.3.1: Compute driving time for distance and average speed
#include <stdio.h>

// Entry point of the program
int main(void)
{
    float distance, speed;
    int num_trips, i;

    printf("How many trips? ");
    scanf("%d", &num_trips);

    for(i = 0; i < num_trips; i++) {
        printf("Enter distance in miles: ");
        scanf("%f", &distance);
        printf("Enter average speed in mph: ");
        scanf("%f", &speed);

        if(speed > 0.0f) {
            printf("Driving time: %f hours\n", distance / speed);
        }
    }

    return 0;
}
