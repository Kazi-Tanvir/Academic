#include<stdio.h>

void swap(int *src, int *dest){
    int temp = *src;
    *src = *dest;
    *dest = temp;
}

void insertion_sort(int *arr,int n){
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        for (; j  >= 0 && arr[j] > temp; j--){
                arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

int main(){
    int n;
    if (scanf("%d", &n) != 1) return 1;
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf(" %d", &arr[i]);
    
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}