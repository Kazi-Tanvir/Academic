// Exercise 5.1.3: Bubble sort for float numbers
#include <stdio.h>

// Entry point of the program
int main(void)
{
    float item[100], t;
    int a, b, count;

    printf("How many numbers? ");
    scanf("%d", &count);
    if(count > 100) count = 100;

    for(a = 0; a < count; a++) scanf("%f", &item[a]);

    for(a = 1; a < count; ++a) {
        for(b = count - 1; b >= a; --b) {
            if(item[b - 1] > item[b]) {
                t = item[b - 1];
                item[b - 1] = item[b];
                item[b] = t;
            }
        }
    }

    for(a = 0; a < count; a++) printf("%f ", item[a]);
    printf("\n");

    return 0;
}
