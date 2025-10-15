#include <stdio.h>

int main(){

    int arr[5] = {1,2,7,8,9};
    int brr[5] = {3,4,5,6,10};

    int merged[10];

    int i = 0; 
    int j = 0;
    int k = 0;

    while(i < 5 && j < 5){
        if(arr[i] < brr[j]){
            merged[k++] = arr[i++];
        }
        else{
            merged[k++] = brr[j++];
        }
    }

    while(i < 5){
        merged[k++] = arr[i++];
    }
    while(j < 5){
        merged[k++] = brr[j++];
    }

    for(int a = 0; a < 10; a++){
        printf("%d ", merged[a]);
    }

}