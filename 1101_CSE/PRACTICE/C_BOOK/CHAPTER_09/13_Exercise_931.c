// Exercise 9.3.1: Count number of bytes in a file
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *fp;
    unsigned count = 0;

    if (argc != 2) {
        printf("Usage: countbytes <filename>\n");
        return 0;
    }

    if ((fp = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    while (fgetc(fp) != EOF) {
        count++;
    }
    fclose(fp);

    printf("File size: %u bytes\n", count);

    return 0;
}
