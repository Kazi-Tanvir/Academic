// Exercise 9.4.3: Copy text file using fgets() and fputs()
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *in, *out;
    char str[128];

    if (argc != 3) {
        printf("Usage: fcopy <source> <destination>\n");
        return 0;
    }

    if ((in = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open source file %s\n", argv[1]);
        exit(1);
    }

    if ((out = fopen(argv[2], "w")) == NULL) {
        printf("Cannot open destination file %s\n", argv[2]);
        fclose(in);
        exit(1);
    }

    while (fgets(str, sizeof(str), in)) {
        fputs(str, out);
    }

    fclose(in);
    fclose(out);

    return 0;
}
