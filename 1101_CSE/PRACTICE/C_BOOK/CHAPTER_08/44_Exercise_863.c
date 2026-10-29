/*
Exercise 8.6.3:
Question: Is this fragment correct? If not why not?
char ch;
scanf("%2c", &ch);
Answer: No. %2c directs scanf() to read 2 characters and store them in memory. Since ch is a single char, writing 2 characters overflows the allocated space and overwrites adjacent memory.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
