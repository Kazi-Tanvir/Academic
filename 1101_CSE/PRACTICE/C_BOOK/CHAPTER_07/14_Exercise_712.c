// Exercise 7.1.2: Function avg() with full modern prototype
#include <stdio.h>

double avg(void);

// Entry point of the program
int main(void)
{
    printf("Average: %f\n", avg());

    return 0;
}

// Prompts for 10 doubles and returns average
double avg(void)
{
    int i;
    double sum = 0.0, num;

    for(i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &num);
        sum += num;
    }

    return sum / 10.0;
}
