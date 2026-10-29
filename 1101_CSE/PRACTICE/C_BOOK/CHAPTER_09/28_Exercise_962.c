// Exercise 9.6.2: Search a file for a specific byte value using ftell()
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *fp;
    int target, ch;

    if (argc != 3) {
        printf("Usage: searchbyte <file> <char>\n");
        return 0;
    }

    if ((fp = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open file %s\n", argv[1]);
        exit(1);
    }

    target = argv[2][0];
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == target) {
            printf("Found '%c' at byte position %ld\n", target, ftell(fp) - 1);
            fclose(fp);
            return 0;
        }
    }

    printf("Byte not found.\n");
    fclose(fp);

    return 0;
}
