// Exercise 4.1.2: Compute light travel time for a distance
#include <stdio.h>

// Entry point of the program
int main(void)
{
    unsigned long int distance;

    printf("Enter distance in miles: ");
    scanf("%lu", &distance);

    printf("Light travel time: %lu seconds\n", distance / 186000UL);

    return 0;
}
