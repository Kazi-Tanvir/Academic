// Example 8.6.3: Scanset reading letters and spaces
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80];

    printf("Enter letters and spaces:\n");
    if (scanf("%79[a-zA-Z ]", str) == 1) {
        printf("%s\n", str);
    }

    return 0;
}
