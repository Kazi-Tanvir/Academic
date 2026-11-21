// Mastery Skills Check 2: Conditionally compile fragment with #ifdef DEBUG
#include <stdio.h>

#define DEBUG

// Entry point of the program
int main(void)
{
    int j = 4;

#ifdef DEBUG
    if (!(j % 2)) {
        printf("j = %d\n", j);
        j = 0;
    }
#endif

    return 0;
}
