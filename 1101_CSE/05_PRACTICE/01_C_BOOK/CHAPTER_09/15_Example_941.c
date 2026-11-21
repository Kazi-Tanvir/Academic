// Example 9.4.1: Writing and reading text lines with fputs() and fgets()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wattribute-warning"

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *fp;
    char str[80];

    if (argc != 2) {
        printf("Usage: fline <filename>\n");
        return 0;
    }

    if ((fp = fopen(argv[1], "w")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    printf("Enter a blank line to stop.\n");
    do {
        printf(": ");
        if (!gets(str)) break;
        strcat(str, "\n");
        if (*str != '\n') fputs(str, fp);
    } while (*str != '\n');
    fclose(fp);

    /* display file */
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }
    while (fgets(str, 80, fp)) {
        printf("%s", str);
    }
    fclose(fp);

    return 0;
}
#pragma GCC diagnostic pop
