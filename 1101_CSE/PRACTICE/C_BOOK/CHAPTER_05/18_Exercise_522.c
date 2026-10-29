/*
Exercise 5.2.2:
Question: What is wrong with this program?
char str[5];
strcpy(str, "this is a test");
Answer: The array str has room for only 5 characters, but "this is a test"
requires 15 bytes (including the null terminator). This causes an array overrun.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
