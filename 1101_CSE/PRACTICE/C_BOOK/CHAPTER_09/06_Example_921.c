// Example 9.2.1: Basic file output and input using fputc() and fgetc()
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    char str[80] = "This is a file system test.\n";
    FILE *fp;
    char *p;
    int ch;

    /* open myfile for output */
    if ((fp = fopen("myfile.txt", "w")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    /* write str to disk */
    p = str;
    while (*p) {
        if (fputc(*p, fp) == EOF) {
            printf("Error writing file.\n");
            exit(1);
        }
        p++;
    }
    fclose(fp);

    /* open myfile for input */
    if ((fp = fopen("myfile.txt", "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    /* read back and display */
    for (;;) {
        ch = fgetc(fp);
        if (ch == EOF) break;
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
