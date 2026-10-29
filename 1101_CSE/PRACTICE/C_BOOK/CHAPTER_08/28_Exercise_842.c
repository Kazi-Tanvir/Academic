/*
Exercise 8.4.2:
Question: Is this program correct? If not, why not?
#include <stdio.h>
int main(void) {
    char *p, *q;
    printf("Enter a string: ");
    p = gets(q);
    printf(p);
    return 0;
}
Answer: No. The program is incorrect because q is an uninitialized pointer. gets() must be called with a pointer to an actual memory buffer (such as an array).
*/
#include <stdio.h>

// Entry point of the program
int main(void)
{
    return 0;
}
