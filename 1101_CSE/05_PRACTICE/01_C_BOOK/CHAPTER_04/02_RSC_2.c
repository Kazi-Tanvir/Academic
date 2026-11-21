// Review Skills Check 2: Convert if-else series to switch
#include <stdio.h>

void load(void);
void save(void);
void enter(void);
void display(void);
void quit_app(void);

// Entry point of the program
int main(void)
{
    char ch = 'S';

    switch(ch) {
        case 'L':
            load();
            break;
        case 'S':
            save();
            break;
        case 'E':
            enter();
            break;
        case 'D':
            display();
            break;
        case 'Q':
            quit_app();
            break;
    }

    return 0;
}

// Dummy load function
void load(void) { printf("Loading...\n"); }

// Dummy save function
void save(void) { printf("Saving...\n"); }

// Dummy enter function
void enter(void) { printf("Entering...\n"); }

// Dummy display function
void display(void) { printf("Displaying...\n"); }

// Dummy quit function
void quit_app(void) { printf("Quitting...\n"); }
