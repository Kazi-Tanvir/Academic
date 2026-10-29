// Exercise 7.2.3: Display string character by character recursively
#include <stdio.h>

void display(const char *p);

// Entry point of the program
int main(void)
{
    display("this is a test\n");

    return 0;
}

// Displays string recursively
void display(const char *p)
{
    if(*p) {
        printf("%c", *p);
        display(p + 1);
    }
}
