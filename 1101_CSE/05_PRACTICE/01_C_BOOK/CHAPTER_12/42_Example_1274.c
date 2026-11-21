// Example 12.7.4: Using dynamic allocation for file I/O buffer
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    int i;
    double *p;
    FILE *fp;

    p = malloc(10 * sizeof(double));
    if (!p) {
        printf("Allocation Error\n");
        exit(1);
    }

    for (i = 0; i < 10; i++) p[i] = (double)(i * 1.5);

    if ((fp = fopen("myfile.tmp", "wb")) == NULL) {
        printf("Cannot open file.\n");
        free(p);
        exit(1);
    }
    fwrite(p, 10 * sizeof(double), 1, fp);
    fclose(fp);
    free(p);

    p = malloc(10 * sizeof(double));
    if (!p) {
        printf("Allocation Error\n");
        exit(1);
    }

    if ((fp = fopen("myfile.tmp", "rb")) == NULL) {
        printf("Cannot open file.\n");
        free(p);
        exit(1);
    }
    fread(p, 10 * sizeof(double), 1, fp);
    fclose(fp);
    remove("myfile.tmp");

    for (i = 0; i < 10; i++) printf("%.1f ", p[i]);
    printf("\n");
    free(p);

    return 0;
}
