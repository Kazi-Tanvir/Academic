#include<stdio.h>

float convert(float ounce){
    return .125*ounce;
}

int main(){
    float ounce;

    printf("Enter OUNCE :");
    scanf("%f",&ounce);

    printf("%.2f Ounces = %.2f Cups",ounce, convert(ounce));

    return 0;
}