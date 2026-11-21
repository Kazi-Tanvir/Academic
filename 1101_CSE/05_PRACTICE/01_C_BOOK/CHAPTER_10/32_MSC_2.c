// Mastery Skills Check 2: Definition of struct s_type
#include <stdio.h>

struct s_type {
    char ch;
    float d;
    int i;
    char str[80];
    double balance;
} s_var;

// Entry point of the program
int main(void)
{
    s_var.ch = 'A';
    s_var.d = 1.23f;
    s_var.i = 10;
    s_var.balance = 1234.56;

    printf("Struct initialized successfully: %c %d\n", s_var.ch, s_var.i);

    return 0;
}
