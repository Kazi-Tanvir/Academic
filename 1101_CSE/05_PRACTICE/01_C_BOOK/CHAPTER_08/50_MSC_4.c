// Mastery Skills Check 4: Input first name, birth date, and phone number
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char name[80], date[80], phone[80];

    printf("Enter first name, birthdate (mm/dd/yy), and phone number:\n");
    if (scanf("%79s%79s%79s", name, date, phone) == 3) {
        printf("Name: %s\nBirthdate: %s\nPhone: %s\n", name, date, phone);
    }

    return 0;
}
