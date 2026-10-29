// Mastery Skills Check 5: Encode command-line string by adding 1
#include <stdio.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    char *p;

    if(argc != 2) {
        printf("You need to specify a string\n");
        return 1;
    }

    p = argv[1];
    while(*p) {
        printf("%c", *p + 1);
        p++;
    }
    printf("\n");

    return 0;
}
