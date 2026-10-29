// Example 9.7.2: Demonstrating rewind() by reading file twice
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    if (argc != 2) {
        printf("Usage: rewinddemo <filename>\n");
        return 0;
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    /* show it once */
    while ((ch = fgetc(fp)) != EOF) putchar(ch);

    rewind(fp);

    /* show it twice */
    while ((ch = fgetc(fp)) != EOF) putchar(ch);

    fclose(fp);

    return 0;
}
