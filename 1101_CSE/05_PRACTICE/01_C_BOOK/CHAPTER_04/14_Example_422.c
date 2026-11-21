// Example 4.2.2: Global variable shared between functions
#include <stdio.h>

int power = 1;

void compute_power(int exp);

// Entry point of the program
int main(void)
{
    compute_power(3);
    printf("Computed power: %d\n", power);

    return 0;
}

// Updates global variable power
void compute_power(int exp)
{
    int i;

    for(i = 0; i < exp; i++) {
        power *= 2;
    }
}
