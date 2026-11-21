// Review Skills Check 2: Writing formatted data with fprintf()
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    FILE *fp;

    if ((fp = fopen("output.txt", "w")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    fprintf(fp, "%s %d %f\n", "Testing", 100, 123.45);
    fclose(fp);
    printf("Formatted output written to output.txt\n");
    remove("output.txt");

    return 0;
}
