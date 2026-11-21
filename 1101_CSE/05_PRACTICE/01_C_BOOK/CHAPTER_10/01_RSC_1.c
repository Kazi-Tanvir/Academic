// Review Skills Check 1: File copy with command-line arguments
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *from, *to;
    int ch;

    if (argc != 3) {
        printf("Usage: copy <source> <destination>\n");
        return 0;
    }

    if ((from = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open source file %s\n", argv[1]);
        exit(1);
    }

    if ((to = fopen(argv[2], "wb")) == NULL) {
        printf("Cannot open destination file %s\n", argv[2]);
        fclose(from);
        exit(1);
    }

    while ((ch = fgetc(from)) != EOF) {
        fputc(ch, to);
    }

    fclose(from);
    fclose(to);
    printf("File copied successfully.\n");

    return 0;
}
