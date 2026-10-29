// Exercise 6.1.4: Loop counting from 0 to 9 using a pointer
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i, *p;

    p = &i;

    for(i = 0; i < 10; i++) {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}
