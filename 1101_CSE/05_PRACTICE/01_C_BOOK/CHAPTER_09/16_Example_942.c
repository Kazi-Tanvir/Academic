// Example 9.4.2: Formatted file I/O using fprintf() and fscanf()
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(void)
{
    FILE *fp;
    char s[80];
    int t;

    if ((fp = fopen("test.txt", "w")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    printf("Enter a string and an integer: ");
    if (scanf("%79s%d", s, &t) == 2) {
        fprintf(fp, "%s %d", s, t);
    }
    fclose(fp);

    if ((fp = fopen("test.txt", "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    if (fscanf(fp, "%79s%d", s, &t) == 2) {
        printf("Read back: %s %d\n", s, t);
    }
    fclose(fp);

    return 0;
}
