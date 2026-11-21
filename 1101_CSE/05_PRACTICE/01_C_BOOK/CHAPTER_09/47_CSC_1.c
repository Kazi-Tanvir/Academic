// Cumulative Skills Check 1: Electronic card catalog with disk save and load
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

char names[MAX][80];
char titles[MAX][80];
char pubs[MAX][80];
int top = 0;

// Displays catalog entry
void display(int i)
{
    printf("%s\n", titles[i]);
    printf("by %s\n", names[i]);
    printf("Published by %s\n", pubs[i]);
}

// Saves catalog to disk file CATALOG
void save(void)
{
    FILE *fp;
    int i;

    if ((fp = fopen("CATALOG", "wb")) == NULL) {
        printf("Cannot open CATALOG for writing.\n");
        return;
    }
    if (fwrite(&top, sizeof(int), 1, fp) != 1) {
        printf("Error writing count.\n");
    }
    for (i = 0; i < top; i++) {
        fwrite(names[i], 80, 1, fp);
        fwrite(titles[i], 80, 1, fp);
        fwrite(pubs[i], 80, 1, fp);
    }
    fclose(fp);
    printf("Catalog saved.\n");
}

// Loads catalog from disk file CATALOG
void load(void)
{
    FILE *fp;
    int i;

    if ((fp = fopen("CATALOG", "rb")) == NULL) {
        printf("CATALOG file not found.\n");
        return;
    }
    if (fread(&top, sizeof(int), 1, fp) != 1) {
        printf("Error reading count.\n");
    }
    for (i = 0; i < top; i++) {
        fread(names[i], 80, 1, fp);
        fread(titles[i], 80, 1, fp);
        fread(pubs[i], 80, 1, fp);
    }
    fclose(fp);
    printf("Catalog loaded (%d entries).\n", top);
}

// Entry point of the program
int main(void)
{
    // Initialize sample entry
    strcpy(names[0], "Herbert Schildt");
    strcpy(titles[0], "Teach Yourself C");
    strcpy(pubs[0], "Osborne McGraw-Hill");
    top = 1;

    save();
    load();
    display(0);
    remove("CATALOG");

    return 0;
}
