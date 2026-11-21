// Example 7.1.4: Passing different numeric types promoted to match parameters
#include <stdio.h>

double volume(double s1, double s2, double s3);

// Entry point of the program
int main(void)
{
    printf("Volume: %f\n", volume(10.0, 20.0, 30.0));

    return 0;
}

// Computes volume of a rectangular prism
double volume(double s1, double s2, double s3)
{
    return s1 * s2 * s3;
}
