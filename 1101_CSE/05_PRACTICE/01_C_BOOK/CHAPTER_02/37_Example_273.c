// Example 2.7.3: Implementing exclusive-OR (XOR) function
#include <stdio.h>

int xor(int a, int b);

// Entry point of the program
int main(void)
{
    int p, q;

    printf("enter P (0 or 1): ");
    scanf("%d", &p);
    printf("enter Q (0 or 1): ");
    scanf("%d", &q);
    printf("P AND Q: %d\n", p && q);
    printf("P OR Q: %d\n", p || q);
    printf("P XOR Q: %d\n", xor(p, q));

    return 0;
}

// Computes logical XOR of two operands
int xor(int a, int b)
{
    return (a || b) && !(a && b);
}
