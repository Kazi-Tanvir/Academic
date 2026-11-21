// Exercise 3.2.2: Compute area of circle, rectangle, or triangle
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char ch;
    float radius, length, width, base, height;

    printf("Compute area of (C)ircle, (R)ectangle, or (T)riangle? ");
    scanf(" %c", &ch);

    if(ch == 'C') {
        printf("Enter radius: ");
        scanf("%f", &radius);
        printf("Area: %f\n", 3.14159f * radius * radius);
    }
    else if(ch == 'R') {
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter width: ");
        scanf("%f", &width);
        printf("Area: %f\n", length * width);
    }
    else if(ch == 'T') {
        printf("Enter base: ");
        scanf("%f", &base);
        printf("Enter height: ");
        scanf("%f", &height);
        printf("Area: %f\n", 0.5f * base * height);
    }

    return 0;
}
