/*
Exercise 9.7.2:
Question: On your own, think of ways that rewind() and fflush() could be used.
Answer:
- rewind() is useful when a file needs to be processed in multiple passes (e.g., first pass counts elements or collects statistics, second pass processes or sorts the data) without closing and reopening the file.
- fflush() is useful when critical information must be immediately written to physical storage to guard against power failure or system crashes (such as transaction logging), or when flushing stdout before reading from stdin without a newline.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
