// Example 9.6.1: fseek() to report byte at specified location
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    long loc = 0;
    FILE *fp;
    int ch;

    if (argc != 2) {
        printf("Usage: seekbyte <filename>\n");
        return 0;
    }

    if ((fp = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    if (fseek(fp, loc, SEEK_SET)) {
        printf("Seek error.\n");
        fclose(fp);
        exit(1);
    }

    ch = fgetc(fp);
    printf("Value at loc %ld is %d\n", loc, ch);
    fclose(fp);

    return 0;
}
