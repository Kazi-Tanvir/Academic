// Example 9.3.1: Copy binary or text file checking feof() and ferror()
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
        printf("Cannot open source file.\n");
        exit(1);
    }

    if ((to = fopen(argv[2], "wb")) == NULL) {
        printf("Cannot open destination file.\n");
        fclose(from);
        exit(1);
    }

    while (!feof(from)) {
        ch = fgetc(from);
        if (ferror(from)) {
            printf("Error reading source file.\n");
            exit(1);
        }
        if (!feof(from)) {
            fputc(ch, to);
            if (ferror(to)) {
                printf("Error writing destination file.\n");
                exit(1);
            }
        }
    }

    fclose(from);
    fclose(to);

    return 0;
}
