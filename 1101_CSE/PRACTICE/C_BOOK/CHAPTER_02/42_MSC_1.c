// Mastery Skills Check 1: Magic number guessing game
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int magic;
    int guess;
    int i;

    magic = 1325;
    guess = 0;

    for(i = 0; i < 10 && guess != magic; i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess == magic) {
            printf("RIGHT!\n");
            printf("%d is the magic number.\n", magic);
        }
        else {
            printf("...Sorry, you're wrong...\n");
            if(guess > magic) printf(" Your guess is too high.\n");
            else printf(" Your guess is too low.\n");
        }
    }

    return 0;
}
