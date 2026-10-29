/*
Exercise 1.8.4:
Question: What is wrong with this function?
void func(void)
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    return i;
}
Answer: The function is declared with a void return type, but attempts to
return a value (i). A void function cannot return a value.
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
