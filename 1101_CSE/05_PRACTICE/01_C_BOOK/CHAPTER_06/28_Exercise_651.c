// Exercise 6.5.1: Executive decision maker using pointer array
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char *answers[3] = {
        "yes",
        "no",
        "maybe - rephrase the question"
    };
    char question[80];

    printf("Enter your question: ");
    scanf("%79s", question);

    printf("%s\n", answers[strlen(question) % 3]);

    return 0;
}
