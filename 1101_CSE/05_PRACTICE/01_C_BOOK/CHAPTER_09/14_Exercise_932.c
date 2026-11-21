// Exercise 9.3.2: Exchange contents of two files using a temporary file
#include <stdio.h>
#include <stdlib.h>

// Copies contents from one file pointer to another
void copy_file(FILE *src, FILE *dst)
{
    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }
}

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *f1, *f2, *temp;

    if (argc != 3) {
        printf("Usage: exch <file1> <file2>\n");
        return 0;
    }

    /* open f1 and temp */
    if ((f1 = fopen(argv[1], "rb")) == NULL || (temp = fopen("temp.tmp", "wb")) == NULL) {
        printf("Error opening files.\n");
        exit(1);
    }
    copy_file(f1, temp);
    fclose(f1);
    fclose(temp);

    /* copy f2 to f1 */
    if ((f2 = fopen(argv[2], "rb")) == NULL || (f1 = fopen(argv[1], "wb")) == NULL) {
        printf("Error opening files.\n");
        exit(1);
    }
    copy_file(f2, f1);
    fclose(f2);
    fclose(f1);

    /* copy temp to f2 */
    if ((temp = fopen("temp.tmp", "rb")) == NULL || (f2 = fopen(argv[2], "wb")) == NULL) {
        printf("Error opening files.\n");
        exit(1);
    }
    copy_file(temp, f2);
    fclose(temp);
    fclose(f2);

    remove("temp.tmp");
    printf("Files swapped successfully.\n");

    return 0;
}
