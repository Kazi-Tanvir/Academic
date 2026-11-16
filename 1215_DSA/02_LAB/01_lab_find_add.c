#include<stdio.h>

// find address of var and arr


int main(){
    int a, b, c, d, e;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;    printf(" %p %p %p %p %p\n", &a, &b, &c, &d, &e);
    int arr[] = {1, 2, 3, 4, 5};

    printf(" %p %p %p %p %p\n", &a, &b, &c, &d, &e);
    printf(" %p %p %p %p %p\n", &arr[0], &arr[1], &arr[2], &d, &e);


}