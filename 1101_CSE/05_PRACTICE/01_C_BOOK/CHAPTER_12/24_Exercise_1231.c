// Exercise 12.3.1: Verifying #undef and #line directives
#include <stdio.h>

#define TEMP_MACRO 100

// Entry point of the program
int main(void)
{
    printf("Macro before undef: %d\n", TEMP_MACRO);

#undef TEMP_MACRO

#line 500 "test.c"
    printf("Current line: %d, file: %s\n", __LINE__, __FILE__);

    return 0;
}
