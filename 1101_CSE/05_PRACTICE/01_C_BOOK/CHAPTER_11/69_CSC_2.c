// Cumulative Skills Check 2: Decode and display 1's complement encoded file
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    if (argc != 2) {
        printf("Usage: showdecoded <filename>\n");
        return 0;
    }

    if ((fp = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open file %s\n", argv[1]);
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(~ch);
    }
    fclose(fp);

    return 0;
}
