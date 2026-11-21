// Exercise 5.2.3: Concatenate input strings into bigstr until quit or full
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char bigstr[1000] = "", str[80];

    for( ; ; ) {
        printf("Enter a string: ");
        scanf("%79s", str);
        if(!strcmp(str, "quit")) break;
        if(strlen(bigstr) + strlen(str) + 2 >= 1000) break;
        strcat(bigstr, str);
        strcat(bigstr, "\n");
    }

    printf("%s", bigstr);

    return 0;
}
