// Example 9.3.2: Compare two files byte-by-byte
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *f1, *f2;
    int ch1, ch2;

    if (argc != 3) {
        printf("Usage: comp <file1> <file2>\n");
        return 0;
    }

    if ((f1 = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open first file.\n");
        exit(1);
    }
    if ((f2 = fopen(argv[2], "rb")) == NULL) {
        printf("Cannot open second file.\n");
        fclose(f1);
        exit(1);
    }

    while (!feof(f1) && !feof(f2)) {
        ch1 = fgetc(f1);
        ch2 = fgetc(f2);
        if (ch1 != ch2) {
            printf("Files are different.\n");
            fclose(f1);
            fclose(f2);
            return 0;
        }
    }

    printf("Files are identical.\n");
    fclose(f1);
    fclose(f2);

    return 0;
}
