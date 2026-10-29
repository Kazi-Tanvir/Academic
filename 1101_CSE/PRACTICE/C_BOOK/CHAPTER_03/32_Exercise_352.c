// Exercise 3.5.2: Mailing list menu validated with do-while loop
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int choice;

    do {
        printf("Mailing list menu:\n\n");
        printf("1. Enter addresses\n");
        printf("2. Delete address\n");
        printf("3. Search the list\n");
        printf("4. Print the list\n");
        printf("5. Quit\n\n");
        printf("Enter the number of your choice (1-5): ");
        scanf("%d", &choice);
    } while(choice < 1 || choice > 5);

    printf("You selected option %d.\n", choice);

    return 0;
}
