// Exercise 11.5.2: File encryption using 8-character key with XOR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *in, *out;
    char key[9] = "ABCDEFGH";
    int ch, i = 0;

    if (argc != 3) {
        printf("Usage: xorcode <in> <out>\n");
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
        ch = ch ^ key[i];
        fputc(ch, out);
        i = (i + 1) % 8;
    }

    fclose(in);
    fclose(out);
    printf("Processed with XOR key.\n");

    return 0;
}
