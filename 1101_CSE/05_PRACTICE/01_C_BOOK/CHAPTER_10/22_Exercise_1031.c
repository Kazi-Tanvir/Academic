// Exercise 10.3.1: Telephone directory with nested address structure
#include <stdio.h>
#include <string.h>

struct address {
    char street[40];
    char city[40];
    char state[3];
    char zip[12];
};

struct phone_type {
    char name[40];
    int areacode;
    char number[9];
    struct address addr;
} entry;

// Entry point of the program
int main(void)
{
    strcpy(entry.name, "John Doe");
    entry.areacode = 212;
    strcpy(entry.number, "555-0199");
    strcpy(entry.addr.street, "123 Broadway");
    strcpy(entry.addr.city, "New York");
    strcpy(entry.addr.state, "NY");
    strcpy(entry.addr.zip, "10001");

    printf("%s (%d) %s\n", entry.name, entry.areacode, entry.number);
    printf("%s, %s, %s %s\n",
           entry.addr.street, entry.addr.city, entry.addr.state, entry.addr.zip);

    return 0;
}
