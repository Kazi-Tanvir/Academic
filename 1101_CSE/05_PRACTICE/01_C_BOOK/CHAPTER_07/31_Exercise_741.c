// Exercise 7.4.1: Compare two command-line string arguments
#include <stdio.h>
#include <string.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    int res;

    if(argc != 3) {
        printf("You must specify two arguments.\n");
        return 1;
    }

    res = strcmp(argv[1], argv[2]);
    if(res < 0) printf("%s < %s\n", argv[1], argv[2]);
    else if(res > 0) printf("%s > %s\n", argv[1], argv[2]);
    else printf("They are the same\n");

    return 0;
}
