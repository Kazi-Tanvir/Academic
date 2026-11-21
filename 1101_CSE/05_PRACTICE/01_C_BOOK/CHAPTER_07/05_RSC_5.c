// Review Skills Check 5: Custom mystrlen() function
#include <stdio.h>

int mystrlen(const char *p);

// Entry point of the program
int main(void)
{
    char str[80] = "Hello World";

    printf("Length is %d\n", mystrlen(str));

    return 0;
}

// Computes string length using pointer arithmetic
int mystrlen(const char *p)
{
    int len = 0;

    while(*p) {
        len++;
        p++;
    }

    return len;
}
