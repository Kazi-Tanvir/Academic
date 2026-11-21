// Example 8.6.2: Scanset reading upper and lowercase letters
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80];

    printf("Enter letters, anything else to stop:\n");
    if (scanf("%79[a-zA-Z]", str) == 1) {
        printf("%s\n", str);
    }

    return 0;
}
