// Exercise 9.5.2: Read doubles and count from binary files created in 9.5.1
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    FILE *fp1, *fp2;
    double d;
    int i, count;

    if ((fp2 = fopen("count.bin", "rb")) == NULL) {
        printf("count.bin not found.\n");
        return 0;
    }
    if (fread(&count, sizeof(int), 1, fp2) != 1) {
        printf("Error reading count.\n");
        fclose(fp2);
        exit(1);
    }
    fclose(fp2);

    if ((fp1 = fopen("values.bin", "rb")) == NULL) {
        printf("values.bin not found.\n");
        return 0;
    }

    printf("Reading %d values:\n", count);
    for (i = 0; i < count; i++) {
        if (fread(&d, sizeof(double), 1, fp1) != 1) {
            printf("Error reading value.\n");
            break;
        }
        printf("%f ", d);
    }
    printf("\n");
    fclose(fp1);

    return 0;
}
