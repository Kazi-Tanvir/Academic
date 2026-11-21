// Example 9.7.3: Demonstrating fflush()
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    FILE *fp;

    if ((fp = fopen("flush_demo.txt", "w")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    fputs("Buffer flushing demo.\n", fp);
    fflush(fp);
    fclose(fp);
    remove("flush_demo.txt");

    printf("Buffer flushed successfully.\n");

    return 0;
}
