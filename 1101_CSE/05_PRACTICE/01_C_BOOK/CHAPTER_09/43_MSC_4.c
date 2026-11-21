// Mastery Skills Check 4: Write 100 randomly generated integers to file RAND
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    FILE *fp;
    int nums[100];
    int i;

    for (i = 0; i < 100; i++) {
        nums[i] = rand();
    }

    if ((fp = fopen("RAND", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    if (fwrite(nums, sizeof(int), 100, fp) != 100) {
        printf("Write error.\n");
        exit(1);
    }
    fclose(fp);
    printf("Wrote 100 integers to RAND.\n");

    return 0;
}
