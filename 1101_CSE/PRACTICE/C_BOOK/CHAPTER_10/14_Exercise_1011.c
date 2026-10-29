// Exercise 10.1.1: Telephone directory using structure array
#include <stdio.h>
#include <string.h>

#define MAX 100

struct phone_type {
    char name[40];
    int areacode;
    char number[9];
} phone[MAX];

int loc = 0;

// Enters a record into phone directory
void enter(void)
{
    strcpy(phone[loc].name, "Alice");
    phone[loc].areacode = 555;
    strcpy(phone[loc].number, "123-4567");
    loc++;
}

// Displays phone records
void display(void)
{
    int i;
    for (i = 0; i < loc; i++) {
        printf("%s (%d) %s\n", phone[i].name, phone[i].areacode, phone[i].number);
    }
}

// Entry point of the program
int main(void)
{
    enter();
    display();

    return 0;
}
