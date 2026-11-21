// Mastery Skills Check 6: Computerized electronic dictionary
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char dict[][2][40] = {
        {"house", "a place of dwelling"},
        {"car", "a vehicle"},
        {"computer", "a thinking machine"},
        {"program", "a sequence of instructions"},
        {"", ""}
    };
    char word[80];
    int i = 0;

    printf("Enter word: ");
    scanf("%79s", word);

    while(strcmp(dict[i][0], "")) {
        if(!strcmp(word, dict[i][0])) {
            printf("Meaning: %s\n", dict[i][1]);
            break;
        }
        i++;
    }
    if(!strcmp(dict[i][0], "")) printf("Not in dictionary\n");

    return 0;
}
