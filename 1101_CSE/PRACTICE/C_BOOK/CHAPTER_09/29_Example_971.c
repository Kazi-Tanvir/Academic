// Example 9.7.1: Demonstrating remove()
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Entry point of the program
int main(void)
{
    char fname[80] = "testfile.tmp";
    FILE *fp;

    // Create a temporary file to demonstrate remove
    if ((fp = fopen(fname, "w")) != NULL) {
        fprintf(fp, "Sample content\n");
        fclose(fp);
    }

    if (remove(fname)) {
        printf("Error removing file.\n");
    } else {
        printf("File %s removed successfully.\n", fname);
    }

    return 0;
}
