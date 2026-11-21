// Exercise 9.2.2: Count frequency of each letter in a text file
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *fp;
    int ch, i;
    int count[26] = {0};

    if (argc != 2) {
        printf("Usage: lettercount <filename>\n");
        return 0;
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file %s\n", argv[1]);
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            count[toupper(ch) - 'A']++;
        }
    }
    fclose(fp);

    for (i = 0; i < 26; i++) {
        printf("%c: %d\n", 'A' + i, count[i]);
    }

    return 0;
}
