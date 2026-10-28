

#include <stdio.h>

int main()
{
    int number = 2135;
    int guess;


    for(int i = 0; ; i++)
    {
        printf("Guess the number : ");
        scanf("%d", &guess);

        if (guess == number)
        {
            printf("Congratulations! You guessed it right in %d tries\n",i);
            break;
        }
        else if (guess < number)
        {
            printf("Too low! `Try again.\n");
        }
        else if(guess > number)
        {
            printf("Too high! Try again.\n");
        }
    }

    return 0;
}