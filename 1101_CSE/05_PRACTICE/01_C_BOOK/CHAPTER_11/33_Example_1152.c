// Example 11.5.2: Bitwise AND to display binary representation of byte
#include <stdio.h>

// Displays 8-bit binary representation of a byte
void show_binary(unsigned char u)
{
    int t;
    for (t = 128; t > 0; t /= 2) {
        if (u & t) printf("1 ");
        else printf("0 ");
    }
    printf("\n");
}

// Entry point of the program
int main(void)
{
    unsigned char ch = 'A';
    printf("Binary representation of '%c': ", ch);
    show_binary(ch);

    return 0;
}
