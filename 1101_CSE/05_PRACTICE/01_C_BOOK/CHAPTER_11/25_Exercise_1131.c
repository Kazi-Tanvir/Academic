// Exercise 11.3.1: Running enumeration test program
#include <stdio.h>

enum days {sun, mon, tue, wed, thu, fri, sat};

// Entry point of the program
int main(void)
{
    enum days d = wed;
    printf("Day number: %d\n", d);

    return 0;
}
