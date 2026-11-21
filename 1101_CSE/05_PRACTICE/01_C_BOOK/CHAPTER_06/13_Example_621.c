// Example 6.2.1: Pointer arithmetic and printing addresses
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char *cp, ch;
    int *ip, i;
    float *fp, f;

    cp = &ch;
    ip = &i;
    fp = &f;

    printf("cp: %p, ip: %p, fp: %p\n", (void *)cp, (void *)ip, (void *)fp);
    cp++;
    ip++;
    fp++;
    printf("after ++: cp: %p, ip: %p, fp: %p\n", (void *)cp, (void *)ip, (void *)fp);

    return 0;
}
