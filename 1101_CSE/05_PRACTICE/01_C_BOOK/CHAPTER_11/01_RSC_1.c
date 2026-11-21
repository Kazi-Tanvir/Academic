// Review Skills Check 1: Array of structures holding squares and cubes
#include <stdio.h>

struct num_type {
    int i;
    int sqr;
    int cube;
} nums[10];

// Entry point of the program
int main(void)
{
    int i;

    for (i = 1; i <= 10; i++) {
        nums[i - 1].i = i;
        nums[i - 1].sqr = i * i;
        nums[i - 1].cube = i * i * i;
    }

    for (i = 0; i < 10; i++) {
        printf("%d %d %d\n", nums[i].i, nums[i].sqr, nums[i].cube);
    }

    return 0;
}
