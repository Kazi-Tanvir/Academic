/*
Exercise 11.4.2:
Question: What is wrong with this fragment?
typedef new_type int;
Answer: The syntax is backwards. The existing C type must come first, followed by the new type name: typedef int new_type;
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
