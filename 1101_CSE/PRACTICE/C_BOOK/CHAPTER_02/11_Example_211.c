// Example 2.1.1: Addition drill with if statement
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int answer;

    printf("What is 10 + 14? ");
    scanf("%d", &answer);
    if(answer == 10 + 14) printf("Right!");

    return 0;
}
