// Review Skills Check 2: Password verification with 3 attempts
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char pw[80];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Password: ");
        scanf("%79s", pw);
        if(!strcmp("Tristan", pw)) break;
    }

    if(i == 3) printf("Access Denied\n");
    else printf("Log-on Successful\n");

    return 0;
}
