/*
Exercise 10.4.2:
Question: How are bit-fields used when interfacing with hardware status registers?
Answer: Hardware device registers commonly define individual bits or small bit clusters to represent specific hardware states (e.g., ready bit, error bit, busy flag, interrupt enable). By mapping a bit-field structure over the register byte or word, individual hardware flags can be accessed by meaningful names rather than using bitwise masks and shifts.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
