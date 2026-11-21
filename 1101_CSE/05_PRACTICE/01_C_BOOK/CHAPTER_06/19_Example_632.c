// Example 6.3.2: Array indexing syntax applied to pointer
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80] = "Pointers and arrays";
    char *p = str;

    for(int i = 0; p[i]; i++) {
        printf("%c", p[i]);
    }
    printf("\n");

    return 0;
}
