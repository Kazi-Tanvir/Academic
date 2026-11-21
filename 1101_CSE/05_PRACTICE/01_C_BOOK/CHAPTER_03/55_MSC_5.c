// Mastery Skills Check 5: Three loop statements counting 1 to 10
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    // 1. for loop
    for(i = 1; i <= 10; i++) printf("%d ", i);
    printf("\n");

    // 2. while loop
    i = 1;
    while(i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // 3. do-while loop
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while(i <= 10);
    printf("\n");

    return 0;
}
