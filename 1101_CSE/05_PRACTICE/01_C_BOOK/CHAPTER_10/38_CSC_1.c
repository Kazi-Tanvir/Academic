// Cumulative Skills Check 1: struct_swap() to swap contents of two structures
#include <stdio.h>

struct s_type {
    int i;
    char ch;
    double d;
} var1, var2;

// Swaps the contents of two s_type structures
void struct_swap(struct s_type *a, struct s_type *b)
{
    struct s_type temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Entry point of the program
int main(void)
{
    var1.i = 100;
    var1.ch = 'A';
    var1.d = 12.34;

    var2.i = 200;
    var2.ch = 'B';
    var2.d = 56.78;

    printf("Before: var1 = (%d, %c, %f), var2 = (%d, %c, %f)\n",
           var1.i, var1.ch, var1.d, var2.i, var2.ch, var2.d);

    struct_swap(&var1, &var2);

    printf("After:  var1 = (%d, %c, %f), var2 = (%d, %c, %f)\n",
           var1.i, var1.ch, var1.d, var2.i, var2.ch, var2.d);

    return 0;
}
