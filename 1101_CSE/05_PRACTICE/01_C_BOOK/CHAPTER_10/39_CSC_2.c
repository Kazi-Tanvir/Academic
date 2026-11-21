// Cumulative Skills Check 2: File copy using union to hold fgetc() return value
#include <stdio.h>
#include <stdlib.h>

union file_byte {
    int i;
    char ch;
};

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *in, *out;
    union file_byte fb;

    if (argc != 3) {
        printf("Usage: ucopy <source> <destination>\n");
        return 0;
    }

    if ((in = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open source file %s\n", argv[1]);
        exit(1);
    }
    if ((out = fopen(argv[2], "wb")) == NULL) {
        printf("Cannot open destination file %s\n", argv[2]);
        fclose(in);
        exit(1);
    }

    while ((fb.i = fgetc(in)) != EOF) {
        fputc(fb.ch, out);
    }

    fclose(in);
    fclose(out);
    printf("File copied successfully using union.\n");

    return 0;
}
