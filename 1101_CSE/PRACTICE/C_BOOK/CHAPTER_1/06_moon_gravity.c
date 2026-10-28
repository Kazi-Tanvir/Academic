#include<stdio.h>

float moon_gravity(int weight){
    return  .17*weight;
}

int main(){
    float weight;
    printf("Enter Your Weight on earth :");
    scanf("%f",&weight);

    printf("Your Weight on Moon is %.2f",moon_gravity(weight));
    return 0;
}