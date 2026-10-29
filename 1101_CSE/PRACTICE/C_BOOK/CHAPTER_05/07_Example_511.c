// Example 5.1.1: Daily high temperatures array and average calculation
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int temp[31];
    int i, min, max, avg;
    int days = 31;

    for(i = 0; i < days; i++) {
        temp[i] = 60 + (i % 25);
    }

    avg = 0;
    for(i = 0; i < days; i++) avg += temp[i];
    printf("Average temperature: %d\n", avg / days);

    min = 200;
    max = 0;
    for(i = 0; i < days; i++) {
        if(min > temp[i]) min = temp[i];
        if(max < temp[i]) max = temp[i];
    }
    printf("Minimum temperature: %d\n", min);
    printf("Maximum temperature: %d\n", max);

    return 0;
}
