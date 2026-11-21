// Exercise 6.3.3: Print string starting from first space using pointer
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char str[80] = "First Second Third";
    char *p = str;

    while(*p && *p != ' ') p++;
    if(*p == ' ') p++;

    printf("%s\n", p);

    return 0;
}
