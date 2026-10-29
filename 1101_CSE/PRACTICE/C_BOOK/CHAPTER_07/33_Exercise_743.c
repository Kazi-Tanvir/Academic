// Exercise 7.4.3: Four-function command-line calculator
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    double a, b;

    if(argc != 4) {
        printf("Usage: calc <operation> <num1> <num2>\n");
        return 1;
    }

    a = atof(argv[2]);
    b = atof(argv[3]);

    if(!strcmp("add", argv[1])) printf("%f\n", a + b);
    else if(!strcmp("subtract", argv[1])) printf("%f\n", a - b);
    else if(!strcmp("multiply", argv[1])) printf("%f\n", a * b);
    else if(!strcmp("divide", argv[1])) {
        if(b != 0.0) printf("%f\n", a / b);
        else printf("Cannot divide by zero\n");
    }

    return 0;
}
