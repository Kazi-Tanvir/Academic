// Example 5.1.4: Bubble sort algorithm on an array
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int item[100];
    int a, b, t;
    int count = 10;

    for(a = 0; a < count; a++) item[a] = count - a;

    // Bubble sort
    for(a = 1; a < count; ++a) {
        for(b = count - 1; b >= a; --b) {
            if(item[b - 1] > item[b]) {
                t = item[b - 1];
                item[b - 1] = item[b];
                item[b] = t;
            }
        }
    }

    for(a = 0; a < count; a++) printf("%d ", item[a]);
    printf("\n");

    return 0;
}
