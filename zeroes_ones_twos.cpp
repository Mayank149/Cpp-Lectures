#include <iostream>
using namespace std;

int main() {
   
    int arr[9] = {0,1,2,0,1,2,0,1,2};
    int l = 0;
    int r = 8;
    int mid = 0;

    while(mid <= r){
        if(arr[mid] == 0){
            swap(arr[l++], arr[mid++]);
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[r--]);
        }
        else mid++;
    }

    for(int i = 0; i < 9; i++){
        cout << arr[i] << " ";
    }

    return 0;
}