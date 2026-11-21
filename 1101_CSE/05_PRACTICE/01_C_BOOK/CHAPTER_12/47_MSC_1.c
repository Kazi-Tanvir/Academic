/*
Mastery Skills Check 1:
Question: What is the difference between using quotes and angle brackets with #include?
Answer:
- Angle brackets (<filename.h>) instruct the preprocessor to search for the header file in system/implementation-defined include directories.
- Quotes ("filename.h") instruct the preprocessor to search first in the current/source directory, and if not found, then search the system include directories.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
