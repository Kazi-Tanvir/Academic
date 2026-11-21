// Example 2.3.2: Addition drill with else code block
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int answer;

    printf("What is 10 + 14? ");
    scanf("%d", &answer);

    if(answer == 10 + 14) printf("Right!");
    else {
        printf("Sorry, you're wrong. ");
        printf("The answer is 24.");
    }

    return 0;
}
