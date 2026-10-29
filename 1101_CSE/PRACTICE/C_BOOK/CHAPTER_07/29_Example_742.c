// Example 7.4.2: Command-line ounces to pounds converter
#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    float ounces;

    if(argc != 2) {
        printf("Usage: program <ounces>\n");
        return 1;
    }

    ounces = (float)atof(argv[1]);
    printf("%f pounds\n", ounces / 16.0f);

    return 0;
}
