// Example 9.2.2: Count occurrences of a specified character in a file
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    int count = 0;

    if (argc != 3) {
        printf("Usage: count <file> <char>\n");
        return 0;
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file %s\n", argv[1]);
        exit(1);
    }

    while ((ch = (char)fgetc(fp)) != EOF) {
        if (ch == argv[2][0]) count++;
    }
    fclose(fp);

    printf("%c occurred %d times.\n", argv[2][0], count);

    return 0;
}
