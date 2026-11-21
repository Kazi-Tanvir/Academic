// Example 9.7.4: Demonstrating rename()
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    FILE *fp;

    // Create file to rename
    if ((fp = fopen("myfile.txt", "w")) != NULL) {
        fprintf(fp, "Rename test\n");
        fclose(fp);
    }

    remove("yourfile.txt"); // clean up if exists
    if (rename("myfile.txt", "yourfile.txt")) {
        printf("Rename failed.\n");
    } else {
        printf("Rename successful.\n");
        remove("yourfile.txt");
    }

    return 0;
}
