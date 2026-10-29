// Cumulative Skills Check 5: Computerized game of Hangman
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char word[] = "concatenation";
    char temp[] = "-------------";
    char ch;
    int count = 0;

    do {
        printf("%s\nEnter your guess: ", temp);
        scanf(" %c", &ch);

        for(size_t i = 0; i < strlen(word); i++) {
            if(ch == word[i]) temp[i] = ch;
        }
        count++;
    } while(strcmp(temp, word));

    printf("%s\nYou guessed the word in %d guesses!\n", temp, count);

    return 0;
}
