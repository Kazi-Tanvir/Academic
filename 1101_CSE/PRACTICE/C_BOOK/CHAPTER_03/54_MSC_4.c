// Mastery Skills Check 4: Traditional infinite loop in C
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int count = 0;

    // Traditional infinite loop form in C
    for( ; ; ) {
        count++;
        if(count == 5) break;
    }
    printf("Infinite loop demonstrated.\n");

    return 0;
}
