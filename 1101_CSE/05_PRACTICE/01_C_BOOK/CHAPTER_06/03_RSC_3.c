/*
Review Skills Check 3:
Question: What is wrong with this fragment?
char name[5] = "Sarah";
Answer: "Sarah" requires 6 bytes (including the null terminator '\0').
The array name is only 5 bytes long, so it causes an array overrun.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
