// Example 10.5.1: Swapping bytes of an integer using a union
#include <stdio.h>

// Swaps the low-order two bytes of an integer using a union
int encode(int i)
{
    union crypt_type {
        int num;
        char c[sizeof(int)];
    } crypt;
    char ch;

    crypt.num = i;
    ch = crypt.c[0];
    crypt.c[0] = crypt.c[1];
    crypt.c[1] = ch;

    return crypt.num;
}

// Entry point of the program
int main(void)
{
    int i = 10;

    i = encode(i);
    printf("10 encoded is %d\n", i);
    i = encode(i);
    printf("decoded is %d\n", i);

    return 0;
}
