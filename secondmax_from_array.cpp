#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[5] = {10, 12, 30, 25, 40};

    int secondmax = INT_MIN;
    int thirdmax = INT_MIN;
    int max = INT_MIN;

    for(int i = 0; i < 5; i++){
        if(arr[i] > max){
            thirdmax = secondmax;
            secondmax = max;
            max = arr[i];
        }
        
        else if(arr[i] > secondmax && arr[i] != max){
            thirdmax = secondmax;
            secondmax = arr[i];
        }
        else if(arr[i] > thirdmax && arr[i] != secondmax && arr[i] != max){
            thirdmax = arr[i];
        }
        
    }

    cout << "Maximum of array is: " << max << endl;
    cout << "Second Maximum of array is: " << secondmax << endl;
    cout << "Third Maximum of array is: " << thirdmax << endl;
    return 0;

}