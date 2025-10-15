#include <stdio.h>

int main(){
    int arr[5] = {10,200,1,8,6000};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}