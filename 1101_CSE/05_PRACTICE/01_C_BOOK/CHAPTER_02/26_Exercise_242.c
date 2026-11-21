// Exercise 2.4.2: Print numbers between 17 and 100 divisible by 17
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for(i = 17; i <= 100; i = i + 1) {
        if((i % 17) == 0) printf("%d ", i);
    }

    return 0;
}
