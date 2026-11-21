// Exercise 8.1.4: Macro defining header name
#include <stdio.h>

#define STDIO <stdio.h>
#include STDIO

// Entry point of the program
int main(void)
{
    printf("This is a test.\n");

    return 0;
}
