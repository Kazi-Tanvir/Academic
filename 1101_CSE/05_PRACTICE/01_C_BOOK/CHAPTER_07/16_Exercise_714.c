// Exercise 7.1.4: Prototype for Purge() returning pointer to double
#include <stdio.h>

double *Purge(void);

double dummy = 3.14159;

// Entry point of the program
int main(void)
{
    double *p = Purge();

    printf("Purge returned value: %f\n", *p);

    return 0;
}

// Returns pointer to double
double *Purge(void)
{
    return &dummy;
}
