// Cumulative Skills Check 2: Macro equivalent of code_it() function
#include <stdio.h>

#define CODE_IT(ch) (~(ch))

// Entry point of the program
int main(void)
{
    int ch = 'A';

    printf("Original: %c (0x%02X)\n", ch, (unsigned char)ch);
    printf("Coded:    0x%02X\n", (unsigned char)CODE_IT(ch));
    printf("Decoded:  %c (0x%02X)\n", (char)CODE_IT(CODE_IT(ch)), (unsigned char)CODE_IT(CODE_IT(ch)));

    return 0;
}
