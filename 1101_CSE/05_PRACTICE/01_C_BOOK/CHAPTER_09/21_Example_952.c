// Example 9.5.2: Writing and reading entire array in single fwrite()/fread() call
#include <stdio.h>
#include <stdlib.h>

double d[10] = {
    10.23, 19.87, 1002.23, 12.9, 0.897,
    11.45, 75.34, 0.0, 1.01, 875.875
};

// Entry point of the program
int main(void)
{
    int i;
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

    for (i = 0; i < 10; i++) d[i] = -1.0;

    if (fread(d, sizeof(d), 1, fp) != 1) {
        printf("Read error.\n");
        exit(1);
    }
    fclose(fp);

    for (i = 0; i < 10; i++) {
        printf("%f ", d[i]);
    }
    printf("\n");

    return 0;
}
