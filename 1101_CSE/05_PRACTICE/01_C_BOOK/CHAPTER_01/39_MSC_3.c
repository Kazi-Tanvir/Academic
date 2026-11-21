// Mastery Skills Check 3: Convert ounces to cups using o_to_c()
#include <stdio.h>

int o_to_c(int ounces);

// Reads ounces, converts to cups via o_to_c(), and displays result
int main(void)
{
    int ounces;
    int cups;

    printf("Enter ounces: ");
    scanf("%d", &ounces);

    cups = o_to_c(ounces);
    printf("%d cups", cups);

    return 0;
}

// Converts ounces to cups by dividing by 8
int o_to_c(int ounces)
{
    return ounces / 8;
}
