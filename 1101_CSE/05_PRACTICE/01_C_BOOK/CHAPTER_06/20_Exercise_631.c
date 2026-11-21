/*
Exercise 6.3.1:
Question: Is this fragment correct?
char str[80];
*(str+2) = 'X';
Answer: Yes, it is correct. *(str + 2) is completely equivalent to str[2].
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80] = "hello";
    *(str + 2) = 'X';
    printf("%s\n", str);
    return 0;
}
