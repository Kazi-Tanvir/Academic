// Review Skills Check 5: Print one of 5 proverbs based on user input
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int choice;

    printf("Enter proverb number (1-5): ");
    scanf("%d", &choice);

    if(choice == 1) printf("A bird in the hand is worth two in the bush.\n");
    if(choice == 2) printf("A rolling stone gathers no moss.\n");
    if(choice == 3) printf("Once burned, twice shy.\n");
    if(choice == 4) printf("Early to bed, early to rise makes a man healthy.\n");
    if(choice == 5) printf("A penny saved is a penny earned.\n");

    return 0;
}
