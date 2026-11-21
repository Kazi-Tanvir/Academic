// Example 3.9.2: Switch statement fall-through without break
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int i;

    for(i = 0; i < 5; i++) {
        switch(i) {
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
        }
    }
    printf("\n");

    return 0;
}
