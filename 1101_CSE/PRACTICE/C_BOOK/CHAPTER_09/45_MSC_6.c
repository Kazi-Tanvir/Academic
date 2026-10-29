// Mastery Skills Check 6: fseek() in RAND to access any of the 100 integers
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    FILE *fp;
    long index = 5;
    int val;

    if ((fp = fopen("RAND", "rb")) == NULL) {
        printf("RAND file not found.\n");
        return 0;
    }

    if (fseek(fp, index * (long)sizeof(int), SEEK_SET)) {
        printf("Seek error.\n");
        fclose(fp);
        exit(1);
    }

    if (fread(&val, sizeof(int), 1, fp) == 1) {
        printf("Integer at index %ld is %d\n", index, val);
    }
    fclose(fp);

    return 0;
}
