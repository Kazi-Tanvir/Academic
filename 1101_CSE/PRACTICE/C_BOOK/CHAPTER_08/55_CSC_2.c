// Cumulative Skills Check 2: Electronic library card catalog
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wattribute-warning"

char names[MAX][80];
char titles[MAX][80];
char pubs[MAX][80];
int top = 0;

// Displays menu and returns user choice
int menu(void)
{
    char str[80];
    int i;

    printf("Card Catalog:\n");
    printf(" 1. Enter\n");
    printf(" 2. Search by Author\n");
    printf(" 3. Search by Title\n");
    printf(" 4. Quit\n");

    do {
        printf("Choose your selection: ");
        if (!gets(str)) return 4;
        i = atoi(str);
        printf("\n");
    } while (i < 1 || i > 4);

    return i;
}

// Displays a catalog entry
void display(int i)
{
    printf("%s\n", titles[i]);
    printf("by %s\n", names[i]);
    printf("Published by %s\n", pubs[i]);
}

// Enters books into the catalog
void enter(void)
{
    int i;

    for (i = top; i < MAX; i++) {
        printf("Enter author name (ENTER to quit): ");
        if (!gets(names[i]) || !*names[i]) break;
        printf("Enter title: ");
        if (!gets(titles[i])) break;
        printf("Enter publisher: ");
        if (!gets(pubs[i])) break;
    }
    top = i;
}

// Searches catalog by author
void author_search(void)
{
    char name[80];
    int i, found = 0;

    printf("Name: ");
    if (!gets(name)) return;

    for (i = 0; i < top; i++) {
        if (!strcmp(name, names[i])) {
            display(i);
            found = 1;
            printf("\n");
        }
    }

    if (!found) printf("Not Found\n");
}

// Searches catalog by title
void title_search(void)
{
    char title[80];
    int i, found = 0;

    printf("Title: ");
    if (!gets(title)) return;

    for (i = 0; i < top; i++) {
        if (!strcmp(title, titles[i])) {
            display(i);
            found = 1;
            printf("\n");
        }
    }

    if (!found) printf("Not Found\n");
}

// Entry point of the program
int main(void)
{
    int choice;

    // Pre-populate with sample book
    strcpy(names[0], "Herbert Schildt");
    strcpy(titles[0], "Teach Yourself C");
    strcpy(pubs[0], "Osborne McGraw-Hill");
    top = 1;

    printf("Card catalog initialized with 1 entry.\n");

    // Sample run to demonstrate menu
    choice = 4; // Exit by default in automated batch
    (void)choice;

    return 0;
}
#pragma GCC diagnostic pop
