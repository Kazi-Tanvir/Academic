#include<stdio.h>

int square(int a){
    return a*a;
}
int cube(int a){
    return a*a*a;
}

int main(){
    for(int i=1;i<=10;i++){
        printf("%d %d %d\n",i,square(i),cube(i));
    }
}