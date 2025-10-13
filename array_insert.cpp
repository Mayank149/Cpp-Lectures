#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    for(int i = n-1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    int newele;
    cout << "Enter Element \n";
    cin >> newele;
    arr[0] = newele;

    for(int ele : arr){
        cout << ele << " ";
    }
} 