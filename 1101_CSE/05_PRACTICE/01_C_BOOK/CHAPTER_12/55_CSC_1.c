// Cumulative Skills Check 1: Card catalog using dynamic allocation for each book
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

struct catalog {
    char name[80];
    char title[80];
    char pub[80];
    unsigned date;
    unsigned char ed;
} *cat[MAX];

int top = 0;

// Displays catalog entry
void display(int i)
{
    if (cat[i]) {
        printf("%s\nby %s\nPublished by %s\nCopyright: %u, %u edition\n",
               cat[i]->title, cat[i]->name, cat[i]->pub, cat[i]->date, cat[i]->ed);
    }
}

// Entry point of the program
int main(void)
{
    cat[0] = malloc(sizeof(struct catalog));
    if (cat[0]) {
        strcpy(cat[0]->name, "Herbert Schildt");
        strcpy(cat[0]->title, "Teach Yourself C");
        strcpy(cat[0]->pub, "Osborne McGraw-Hill");
        cat[0]->date = 1997;
        cat[0]->ed = 3;
        top = 1;

        display(0);
        free(cat[0]);
    }

    return 0;
}
