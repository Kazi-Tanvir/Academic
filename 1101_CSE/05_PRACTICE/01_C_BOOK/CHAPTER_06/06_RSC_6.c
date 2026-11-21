// Review Skills Check 6: Simple telephone directory lookup
#include <stdio.h>
#include <string.h>

char phone[][2][40] = {
    {"Fred", "555-1010"},
    {"Barney", "555-1234"},
    {"Ralph", "555-2347"},
    {"Tom", "555-8396"},
    {"", ""}
};

// Entry point of the program
int main(void)
{
    char name[80];
    int i;

    printf("Name? ");
    scanf("%79s", name);

    for(i = 0; phone[i][0][0]; i++) {
        if(!strcmp(name, phone[i][0])) {
            printf("number: %s\n", phone[i][1]);
            return 0;
        }
    }
    printf("Not found\n");

    return 0;
}
