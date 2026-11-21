// Review Skills Check 6: Reports argument count and last argument
#include <stdio.h>

// Entry point of the program
int main(int argc, char *argv[])
{
    printf("There were %d arguments.\n", argc);
    if (argc > 1) {
        printf("The last one is %s.\n", argv[argc - 1]);
    } else {
        printf("The last one is %s.\n", argv[0]);
    }

    return 0;
}
