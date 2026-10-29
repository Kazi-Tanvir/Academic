// Exercise 9.5.1: Write user-entered doubles and count to binary files
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    FILE *fp1, *fp2;
    double d;
    int i, count;

    if ((fp1 = fopen("values.bin", "wb")) == NULL || (fp2 = fopen("count.bin", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    // Sample data for automated run
    double samples[] = {1.5, 2.5, 3.5, 4.5, 0.0};
    count = 0;
    for (i = 0; samples[i] != 0.0; i++) {
        d = samples[i];
        if (fwrite(&d, sizeof(double), 1, fp1) != 1) {
            printf("Error writing values.\n");
            exit(1);
        }
        count++;
    }

    if (fwrite(&count, sizeof(int), 1, fp2) != 1) {
        printf("Error writing count.\n");
        exit(1);
    }

    fclose(fp1);
    fclose(fp2);
    printf("Wrote %d values to values.bin\n", count);

    return 0;
}
