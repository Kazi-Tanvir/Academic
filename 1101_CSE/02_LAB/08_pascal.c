#include<stdio.h>

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

int main(){
    int height ;
    printf("Enter the trianngle height : ");
    scanf("%d",&height);

    for(int i = 0; i <= height ; i++){
        for(int j = 0;j<= i;j++){
            int value = factorial(i)/(factorial(i-j)*factorial(j));
            printf("%d " ,value);
        }
        printf("\n");
    }
}