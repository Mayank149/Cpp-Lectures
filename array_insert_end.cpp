#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;

    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    int newele;
    cout << "Enter Element \n";
    cin >> newele;
    arr[6] = newele;

    for(int ele : arr){
        cout << ele << " ";
    }
} 