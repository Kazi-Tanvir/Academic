// Mastery Skills Check 2: Copy text file prompting user for file names
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    char src[80], dst[80];
    FILE *in, *out;
    int ch;

    printf("Enter source file name: ");
    if (scanf("%79s", src) != 1) return 0;

    printf("Enter destination file name: ");
    if (scanf("%79s", dst) != 1) return 0;

    if ((in = fopen(src, "r")) == NULL) {
        printf("Cannot open source file %s\n", src);
        exit(1);
    }

    if ((out = fopen(dst, "w")) == NULL) {
        printf("Cannot open destination file %s\n", dst);
        fclose(in);
        exit(1);
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);
    printf("File copied successfully.\n");

    return 0;
}
