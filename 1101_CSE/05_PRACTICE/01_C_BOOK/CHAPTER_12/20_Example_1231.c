/*
Example 12.3.1:
Question: What does the #error directive do?
Answer: The #error directive causes the compiler to stop compilation and emit the specified error message along with the file name and line number.
Example from textbook:
#include <stdio.h>
int main(void) {
    int i = 10;
    #error This is an error message.
    printf("%d", i);
    return 0;
}
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
#ifndef DONT_COMPILE
    printf("Compiled successfully without triggering #error.\n");
#else
    #error Compilation stopped by #error directive.
#endif

    return 0;
}
