// Exercise 9.6.1: fseek() to display every other byte in a file
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *fp;
    long l, i;
    int ch;

    if (argc != 2) {
        printf("Usage: everyother <filename>\n");
        return 0;
    }

    if ((fp = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open file %s\n", argv[1]);
        exit(1);
    }

    fseek(fp, 0L, SEEK_END);
    l = ftell(fp);

    for (i = 0; i < l; i += 2) {
        fseek(fp, i, SEEK_SET);
        ch = fgetc(fp);
        putchar(ch);
    }
    printf("\n");
    fclose(fp);

    return 0;
}
