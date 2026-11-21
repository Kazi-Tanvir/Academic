// Example 12.2.3: Conditional compilation using #ifndef
#include <stdio.h>

#ifndef RELEASE
#define BUILD_MODE "Development Build"
#else
#define BUILD_MODE "Release Build"
#endif

// Entry point of the program
int main(void)
{
    printf("Build: %s\n", BUILD_MODE);

    return 0;
}
