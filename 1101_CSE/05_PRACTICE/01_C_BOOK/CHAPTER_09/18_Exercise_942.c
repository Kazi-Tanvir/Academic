// Exercise 9.4.2: Display text file with pagination (30 lines per screen)
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    FILE *fp;
    char str[128];
    int count = 0;

    if (argc != 2) {
        printf("Usage: pageview <filename>\n");
        return 0;
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file %s\n", argv[1]);
        exit(1);
    }

    while (fgets(str, sizeof(str), fp)) {
        printf("%s", str);
        count++;
        if (count == 30) {
            printf("--- Press ENTER to continue ---");
            getchar();
            count = 0;
        }
    }
    fclose(fp);

    return 0;
}
