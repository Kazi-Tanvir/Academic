// Cumulative Skills Check 1: Command-line password check
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("Specify a password\n");
        return 1;
    }

    if(!strcmp(argv[1], "password")) {
        printf("Access Permitted\n");
    } else {
        printf("Access Denied\n");
    }

    return 0;
}
