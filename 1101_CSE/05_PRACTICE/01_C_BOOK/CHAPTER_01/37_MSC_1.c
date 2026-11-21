// Mastery Skills Check 1: Calculate effective weight on the moon
#include <stdio.h>

// Prompts for Earth weight and displays effective moon weight
int main(void)
{
    float weight;

    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Effective moon weight: %f", weight * 0.17f);

    return 0;
}
