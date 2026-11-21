// Mastery Skills Check 5: Read and display integers stored in file RAND
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    FILE *fp;
    int nums[100];
    int i;

    if ((fp = fopen("RAND", "rb")) == NULL) {
        printf("RAND file not found. Run 43_MSC_4 first.\n");
        return 0;
    }

    if (fread(nums, sizeof(int), 100, fp) != 100) {
        printf("Read error.\n");
        fclose(fp);
        exit(1);
    }
    fclose(fp);

    for (i = 0; i < 100; i++) {
        printf("%d ", nums[i]);
        if ((i + 1) % 10 == 0) printf("\n");
    }

    return 0;
}
