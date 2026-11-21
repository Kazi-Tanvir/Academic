// Mastery Skills Check 3: Conditionally compile when DEBUG == 1
#include <stdio.h>

#define DEBUG 1

// Entry point of the program
int main(void)
{
    int j = 4;

#if DEBUG == 1
    if (!(j % 2)) {
        printf("j = %d\n", j);
        j = 0;
    }
#endif

    return 0;
}
