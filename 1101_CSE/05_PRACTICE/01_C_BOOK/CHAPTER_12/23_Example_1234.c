/*
Example 12.3.4:
Question: Check your compiler's user manual and learn about any #pragma directives supported by your system.
Answer: The #pragma directive provides compiler-specific instructions. For example, GCC supports pragmas like:
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic pop
as well as #pragma pack(n) for structure packing.
*/
#include <stdio.h>

// Demonstrates compiler-specific pragma usage
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"

// Entry point of the program
int main(void)
{
    int unused_var;
    (void)unused_var;

    printf("#pragma demonstrated.\n");

    return 0;
}
#pragma GCC diagnostic pop
