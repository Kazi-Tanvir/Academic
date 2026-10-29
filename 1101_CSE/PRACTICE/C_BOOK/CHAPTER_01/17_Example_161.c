// Example 1.6.1: Jovian years calculation with comments
#include <stdio.h>

// Entry point of the program
int main(void)
{
    float e_days;
    float j_years;

    printf("Enter number of Earth days: ");
    scanf("%f", &e_days);

    j_years = e_days / (365.0f * 12.0f);

    printf("Equivalent Jovian years: %f", j_years);

    return 0;
}
