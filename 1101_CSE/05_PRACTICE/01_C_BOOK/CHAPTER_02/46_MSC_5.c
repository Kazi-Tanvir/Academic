// Mastery Skills Check 5: Print numbers 1 to 100 in 5 columns with tabs
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for(i = 1; i <= 100; i++) {
        printf("%d\t", i);
        if((i % 5) == 0) printf("\n");
    }

    return 0;
}
