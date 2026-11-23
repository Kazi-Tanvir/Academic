#include<stdio.h>

void selection_sort(int *arr, int n){
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[i]){
                min = j;
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main(){
    int arr[5] = {1, 6, 3, 8, 5};
    selection_sort(arr, 5);
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}