// Exercise 11.5.1: File encoding using 1's complement operator ~
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *in, *out;
    int ch;

    if (argc != 3) {
        printf("Usage: compcode <in> <out>\n");
        return 0;
    }

    if ((in = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open input file.\n");
        exit(1);
    }
    if ((out = fopen(argv[2], "wb")) == NULL) {
        printf("Cannot open output file.\n");
        fclose(in);
        exit(1);
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(~ch, out);
    }

    fclose(in);
    fclose(out);
    printf("Encoded/decoded file successfully.\n");

    return 0;
}
