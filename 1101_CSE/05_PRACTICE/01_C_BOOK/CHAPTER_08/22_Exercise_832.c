// Exercise 8.3.2: Prints periods continuously until a key is pressed
#include <stdio.h>
#include <conio.h>

// Entry point of the program
int main(void)
{
    printf("Printing periods (press any key to stop):\n");
    do {
        putchar('.');
    } while (!kbhit());
    getch(); // consume key
    printf("\nStopped.\n");

    return 0;
}
