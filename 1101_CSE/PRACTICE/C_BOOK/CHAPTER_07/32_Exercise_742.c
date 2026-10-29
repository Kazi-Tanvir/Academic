// Exercise 7.4.2: Sum two command-line numeric arguments
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    if(argc != 3) {
        printf("You must specify two numbers.\n");
        return 1;
    }

    printf("Sum: %f\n", atof(argv[1]) + atof(argv[2]));

    return 0;
}
