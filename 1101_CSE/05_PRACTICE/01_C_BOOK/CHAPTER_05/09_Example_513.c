// Example 5.1.3: Message encoding using character array
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char mess[80];
    int i;

    printf("Enter message (up to 80 chars, end with newline):\n");
    for(i = 0; i < 80; i++) {
        scanf("%c", &mess[i]);
        if(mess[i] == '\n') break;
    }

    printf("Encoded message: ");
    for(int j = 0; j < i; j++) {
        printf("%c", mess[j] + 1);
    }
    printf("\n");

    return 0;
}
