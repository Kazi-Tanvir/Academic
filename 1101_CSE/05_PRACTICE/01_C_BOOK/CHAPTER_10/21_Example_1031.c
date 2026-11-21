// Example 10.3.1: Nested structures in catalog program
#include <stdio.h>
#include <string.h>

struct publish_date {
    unsigned month;
    unsigned day;
    unsigned year;
};

struct catalog {
    char name[80];
    char title[80];
    char pub[80];
    struct publish_date date;
    unsigned char ed;
} cat;

// Entry point of the program
int main(void)
{
    strcpy(cat.name, "Herbert Schildt");
    strcpy(cat.title, "Teach Yourself C");
    strcpy(cat.pub, "Osborne McGraw-Hill");
    cat.date.month = 5;
    cat.date.day = 1;
    cat.date.year = 1997;
    cat.ed = 3;

    printf("%s by %s, published %u/%u/%u\n",
           cat.title, cat.name, cat.date.month, cat.date.day, cat.date.year);

    return 0;
}
