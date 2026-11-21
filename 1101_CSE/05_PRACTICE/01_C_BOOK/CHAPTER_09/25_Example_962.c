// Example 9.6.2: Copy a file in reverse order using ftell() and fseek()
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    long loc;
    FILE *in, *out;
    int ch;

    if (argc != 3) {
        printf("Usage: revcopy <source> <destination>\n");
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

    fseek(in, 0L, SEEK_END);
    loc = ftell(in) - 1;

    while (loc >= 0L) {
        fseek(in, loc, SEEK_SET);
        ch = fgetc(in);
        fputc(ch, out);
        loc--;
    }

    fclose(in);
    fclose(out);

    return 0;
}
