// Example 3.2.2: Addition drill with second attempt via nested if
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int answer, count;

    for(count = 1; count < 11; count++) {
        printf("What is %d + %d? ", count, count);
        scanf("%d", &answer);

        if(answer == count + count) printf("Right!\n");
        else {
            printf("Sorry, you're wrong\n");
            printf("Try again.\n");

            printf("What is %d + %d? ", count, count);
            scanf("%d", &answer);

            if(answer == count + count) printf("Right!\n");
            else printf("Wrong, the answer is %d\n", count + count);
        }
    }

    return 0;
}
