// Example 11.4.2: typedef with structures
#include <stdio.h>

typedef struct {
    int x;
    int y;
} POINT;

// Entry point of the program
int main(void)
{
    POINT p;
    p.x = 10;
    p.y = 20;

    printf("Point: (%d, %d)\n", p.x, p.y);

    return 0;
}
