// Example 10.1.3: Array of structures for card catalog
#include <stdio.h>
#include <string.h>

#define MAX 100

struct catalog {
    char name[80];
    char title[80];
    char pub[80];
    unsigned date;
    unsigned char ed;
} cat[MAX];

int top = 0;

// Displays catalog entry
void display(int i)
{
    printf("%s\n", cat[i].title);
    printf("by %s\n", cat[i].name);
    printf("Published by %s, %u, Edition: %u\n", cat[i].pub, cat[i].date, cat[i].ed);
}

// Entry point of the program
int main(void)
{
    strcpy(cat[0].name, "Herbert Schildt");
    strcpy(cat[0].title, "Teach Yourself C");
    strcpy(cat[0].pub, "Osborne McGraw-Hill");
    cat[0].date = 1997;
    cat[0].ed = 3;
    top = 1;

    display(0);

    return 0;
}
