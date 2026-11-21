// Review Skills Check 2: Union to display individual bytes of double
#include <stdio.h>

union d_bytes {
    double d;
    unsigned char b[sizeof(double)];
};

// Entry point of the program
int main(void)
{
    union d_bytes u;
    size_t i;

    u.d = 123.456;

    printf("Bytes of double: ");
    for (i = 0; i < sizeof(double); i++) {
        printf("%02X ", u.b[i]);
    }
    printf("\n");

    return 0;
}
