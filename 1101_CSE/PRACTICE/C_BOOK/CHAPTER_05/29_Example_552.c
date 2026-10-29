// Example 5.5.2: Initialized string table for words
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char words[][20] = {
        "apple", "banana", "cherry", "date"
    };
    char search[20];
    int i, found = 0;

    printf("Enter word to search: ");
    scanf("%19s", search);

    for(i = 0; i < 4; i++) {
        if(!strcmp(words[i], search)) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found) printf("Word not found\n");

    return 0;
}
