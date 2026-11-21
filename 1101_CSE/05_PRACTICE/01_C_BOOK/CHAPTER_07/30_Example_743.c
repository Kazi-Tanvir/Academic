// Example 7.4.3: Command-line password protection
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("Usage: program <password>\n");
        return 1;
    }

    if(!strcmp(argv[1], "secret")) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}
