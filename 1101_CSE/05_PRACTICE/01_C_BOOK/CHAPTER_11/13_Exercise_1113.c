// Exercise 11.1.3: Demonstrating extern linkage in single compilation unit
#include <stdio.h>
#include <string.h>

char str[80];

// Populates global string variable
void getname(void)
{
    strcpy(str, "Herbert");
}

// Entry point of the program
int main(void)
{
    extern char str[80];

    getname();
    printf("Hello %s\n", str);

    return 0;
}
