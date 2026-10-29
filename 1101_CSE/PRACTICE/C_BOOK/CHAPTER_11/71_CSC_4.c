// Cumulative Skills Check 4: Optimized telephone directory using register variables
#include <stdio.h>
#include <string.h>

#define MAX 100

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
} phone[MAX];

int loc = 0;

// Displays phone records with register index optimization
void display(void)
{
    register int i;
    for (i = 0; i < loc; i++) {
        printf("%s (%d) %s\n", phone[i].name, phone[i].areacode, phone[i].number);
    }
}

// Entry point of the program
int main(void)
{
    strcpy(phone[0].name, "Jane Smith");
    phone[0].areacode = 415;
    strcpy(phone[0].number, "555-9876");
    strcpy(phone[0].addr.city, "San Francisco");
    loc = 1;

    display();

    return 0;
}
