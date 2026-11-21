// Exercise 4.2.2: Sound travel time calculator function
#include <stdio.h>

void soundspeed(double distance);

// Entry point of the program
int main(void)
{
    double distance;

    printf("Enter distance in feet: ");
    scanf("%lf", &distance);

    soundspeed(distance);

    return 0;
}

// Computes travel time for sound in air (1129 ft/sec)
void soundspeed(double distance)
{
    printf("Travel time: %f seconds\n", distance / 1129.0);
}
