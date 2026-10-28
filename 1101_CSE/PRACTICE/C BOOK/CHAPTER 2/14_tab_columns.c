#include<stdio.h>

int main(){
    int n = 100;
    for(int i = 1; i<=n;i++){
        printf("%d \t",i);
        if(i%5==0) printf("\n");
    }
    return 0;
}