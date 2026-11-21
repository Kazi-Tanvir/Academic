// Example 5.2.2: Command-based calculator using strcmp
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(void)
{
    char command[80];
    int i, j;

    printf("Operation (add, subtract, quit): ");
    scanf("%79s", command);

    if(!strcmp(command, "quit")) return 0;

    printf("Enter first and second numbers: ");
    scanf("%d %d", &i, &j);

    if(!strcmp(command, "add")) printf("%d\n", i + j);
    else if(!strcmp(command, "subtract")) printf("%d\n", i - j);
    else printf("Unknown command\n");

    return 0;
}
