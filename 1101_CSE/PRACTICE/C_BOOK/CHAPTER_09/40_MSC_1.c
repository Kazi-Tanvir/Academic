// Mastery Skills Check 1: Display contents of text file on command line with error checks
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *fp;
    char str[128];

    if (argc != 2) {
        printf("Usage: showfile <filename>\n");
        return 0;
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file %s\n", argv[1]);
        exit(1);
    }

    while (fgets(str, sizeof(str), fp)) {
        printf("%s", str);
    }

    if (ferror(fp)) {
        printf("Error reading file.\n");
    }
    fclose(fp);

    return 0;
}
