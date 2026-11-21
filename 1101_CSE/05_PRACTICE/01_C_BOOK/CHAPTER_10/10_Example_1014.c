// Example 10.1.4: Writing and reading structure array in single file operation
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct catalog {
    char name[80];
    char title[80];
    char pub[80];
    unsigned date;
    unsigned char ed;
} cat[2];

// Entry point of the program
int main(void)
{
    FILE *fp;

    strcpy(cat[0].name, "Herbert Schildt");
    strcpy(cat[0].title, "Teach Yourself C");
    strcpy(cat[0].pub, "Osborne McGraw-Hill");
    cat[0].date = 1997;
    cat[0].ed = 3;

    if ((fp = fopen("catalog.bin", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }
    fwrite(cat, sizeof(struct catalog), 2, fp);
    fclose(fp);

    if ((fp = fopen("catalog.bin", "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }
    fread(cat, sizeof(struct catalog), 2, fp);
    fclose(fp);
    remove("catalog.bin");

    printf("Read book: %s by %s\n", cat[0].title, cat[0].name);

    return 0;
}
