/*
Exercise 5.4.2:
Question: Is this fragment correct?
char name[4] = "Tom";
strcpy(name, "Tom Peterson");
Answer: No. The array name is only 4 characters long. Calling strcpy() with
"Tom Peterson" overruns the array bounds.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
