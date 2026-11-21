// Example 5.2.1: Demonstrating strcpy, strcat, strcmp, and strlen
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char str1[80], str2[80];

    strcpy(str1, "hello");
    strcpy(str2, "world");

    printf("lengths: %lu %lu\n", (unsigned long)strlen(str1), (unsigned long)strlen(str2));

    if(!strcmp(str1, str2)) printf("strings are equal\n");
    else printf("strings are not equal\n");

    strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}
