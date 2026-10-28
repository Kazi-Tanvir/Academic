#include<stdio.h>

float convert(float usd){
    return 2*usd;
}

int main(){
    float usd ;
    printf("Enter Your USD :");
    scanf("%f",&usd);
    printf("%.2f USD = %.2f POUND",usd,convert(usd));
    return 0;
}