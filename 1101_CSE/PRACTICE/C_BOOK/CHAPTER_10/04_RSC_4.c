// Review Skills Check 4: Read TEMP into array with fread()
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    FILE *fp;
    int nums[20];
    int i;

    if ((fp = fopen("TEMP", "rb")) == NULL) {
        printf("TEMP file not found. Creating temporary data...\n");
        for (i = 0; i < 20; i++) nums[i] = i + 1;
    } else {
        if (fread(nums, sizeof(int), 20, fp) != 20) {
            printf("Read error.\n");
            fclose(fp);
            exit(1);
        }
        fclose(fp);
    }

    for (i = 0; i < 20; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    remove("TEMP");

    return 0;
}
