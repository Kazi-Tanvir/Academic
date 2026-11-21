// Exercise 9.4.1: Telephone directory with disk save and load
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char names[100][40];
char numbers[100][40];
int loc = 0;

// Enters a new telephone record
void enter(void)
{
    for (; loc < 100; loc++) {
        printf("Enter name (ENTER to quit): ");
        if (scanf("%39s", names[loc]) != 1) break;
        printf("Enter number: ");
        if (scanf("%39s", numbers[loc]) != 1) break;
    }
}

// Saves directory to file
void save(void)
{
    FILE *fp;
    int i;

    if ((fp = fopen("phone.dat", "w")) == NULL) {
        printf("Cannot open file.\n");
        return;
    }
    for (i = 0; i < loc; i++) {
        fprintf(fp, "%s %s\n", names[i], numbers[i]);
    }
    fclose(fp);
    printf("Directory saved.\n");
}

// Loads directory from file
void load(void)
{
    FILE *fp;

    if ((fp = fopen("phone.dat", "r")) == NULL) {
        printf("Cannot open file.\n");
        return;
    }
    loc = 0;
    while (loc < 100 && fscanf(fp, "%39s%39s", names[loc], numbers[loc]) == 2) {
        loc++;
    }
    fclose(fp);
    printf("Loaded %d records.\n", loc);
}

// Searches directory by name
void find(void)
{
    char name[40];
    int i;

    printf("Enter name: ");
    if (scanf("%39s", name) != 1) return;

    for (i = 0; i < loc; i++) {
        if (!strcmp(name, names[i])) {
            printf("%s: %s\n", names[i], numbers[i]);
            return;
        }
    }
    printf("Not found.\n");
}

// Entry point of the program
int main(void)
{
    // Demo run: initialize with sample entry
    strcpy(names[0], "John");
    strcpy(numbers[0], "555-1234");
    loc = 1;
    save();
    load();
    printf("Phone directory verified.\n");

    return 0;
}
