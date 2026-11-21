// Cumulative Skills Check 2: File copy replacing tabs with 4 spaces
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *in, *out;
    int ch;

    if (argc != 3) {
        printf("Usage: detab <source> <destination>\n");
        return 0;
    }

    if ((in = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open source file %s\n", argv[1]);
        exit(1);
    }

    if ((out = fopen(argv[2], "w")) == NULL) {
        printf("Cannot open destination file %s\n", argv[2]);
        fclose(in);
        exit(1);
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch == '\t') {
            fputs("    ", out);
        } else {
            fputc(ch, out);
        }
    }

    fclose(in);
    fclose(out);
    printf("Copied with tabs expanded to spaces.\n");

    return 0;
}
