// Review Skills Check 3: Initialize 20-element array and write to TEMP
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    FILE *fp;
    int nums[20];
    int i;

    for (i = 0; i < 20; i++) {
        nums[i] = i + 1;
    }

    if ((fp = fopen("TEMP", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    if (fwrite(nums, sizeof(int), 20, fp) != 20) {
        printf("Write error.\n");
        fclose(fp);
        exit(1);
    }
    fclose(fp);
    printf("Wrote 20 integers to TEMP.\n");

    return 0;
}
