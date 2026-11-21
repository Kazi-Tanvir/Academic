// Example 3.1.3: Yes/No response check
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch;

    printf("Do you wish to continue? (Y/N): ");
    scanf(" %c", &ch);

    if(ch == 'Y') {
        printf("Continuing...\n");
    }

    return 0;
}
