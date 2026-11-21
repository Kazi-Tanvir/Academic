// Example 9.6.3: Random access in array of doubles using fseek()
#include <stdio.h>
#include <stdlib.h>

double d[10] = {
    10.23, 19.87, 1002.23, 12.9, 0.897,
    11.45, 75.34, 0.0, 1.01, 875.875
};

// Entry point of the program
int main(void)
{
    long loc = 3;
    double value;
    FILE *fp;

    if ((fp = fopen("myfile.bin", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    if (fwrite(d, sizeof(d), 1, fp) != 1) {
        printf("Write error.\n");
        exit(1);
    }
    fclose(fp);

    if ((fp = fopen("myfile.bin", "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    fseek(fp, loc * (long)sizeof(double), SEEK_SET);
    if (fread(&value, sizeof(double), 1, fp) == 1) {
        printf("Element %ld is %f\n", loc, value);
    }
    fclose(fp);

    return 0;
}
