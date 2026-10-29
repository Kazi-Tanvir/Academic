// Review Skills Check 3: hypot() function using math library
#include <stdio.h>
#include <math.h>

// Computes the hypotenuse of a right-angled triangle given two sides
double hypot(double s1, double s2)
{
    return sqrt(s1 * s1 + s2 * s2);
}

// Entry point of the program
int main(void)
{
    printf("%f\n", hypot(12.2, 19.2));

    return 0;
}
