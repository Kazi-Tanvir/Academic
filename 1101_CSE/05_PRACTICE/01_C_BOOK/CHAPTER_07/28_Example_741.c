// Example 7.4.1: Printing command-line arguments argc and argv
#include <stdio.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    for(int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    return 0;
}
