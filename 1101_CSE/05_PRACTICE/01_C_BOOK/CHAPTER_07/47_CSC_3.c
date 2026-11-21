// Cumulative Skills Check 3: avg() function averaging double array using pointers
#include <stdio.h>

void avg(const double *d, int num);

// Entry point of the program
int main(void)
{
    double nums[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    avg(nums, 10);

    return 0;
}

// Computes and prints average of an array of doubles
void avg(const double *d, int num)
{
    double sum = 0.0;

    for(int i = 0; i < num; i++) {
        sum += *(d + i);
    }

    printf("Average is %f\n", sum / (double)num);
}
