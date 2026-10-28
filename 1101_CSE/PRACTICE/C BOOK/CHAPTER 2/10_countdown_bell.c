#include<stdio.h>

int main(){
    int n;
    printf("Enter Your Number : ");
    scanf("%d",&n);

    for(int i = n; i >=0 ;i--){
        printf("%d ",i);
        if(i==0) printf("\a");
    }
}