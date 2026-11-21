// Exercise 10.5.1: Union of double and byte array to read/write double byte-by-byte
#include <stdio.h>
#include <stdlib.h>

union u_type {
    double d;
    unsigned char c[sizeof(double)];
};

// Writes double to file a byte at a time
void uwrite(double num, FILE *fp)
{
    union u_type u;
    size_t i;

    u.d = num;
    for (i = 0; i < sizeof(double); i++) {
        fputc(u.c[i], fp);
    }
}

// Reads double from file a byte at a time
double uread(FILE *fp)
{
    union u_type u;
    size_t i;
    int ch;

    for (i = 0; i < sizeof(double); i++) {
        ch = fgetc(fp);
        if (ch == EOF) ch = 0;
        u.c[i] = (unsigned char)ch;
    }
    return u.d;
}

// Entry point of the program
int main(void)
{
    FILE *fp;
    double d = 12345.6789;

    if ((fp = fopen("union.tmp", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }
    uwrite(d, fp);
    fclose(fp);

    if ((fp = fopen("union.tmp", "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }
    d = uread(fp);
    fclose(fp);
    remove("union.tmp");

    printf("Read back: %f\n", d);

    return 0;
}
