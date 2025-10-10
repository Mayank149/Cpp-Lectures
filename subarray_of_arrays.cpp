#include <iostream>
using namespace std;

int main() {
   
    int arr[3] = {1,2,3};

    // for(int i = 0; i < 3; i++){
    //     for(int j = i; j < 3; j++){
    //         for(int k = i; k <= j; k++){
    //             cout << arr[k] << " ";
    //         }
    //         cout << "\n";
    //     }
    // }

    for(int i = 0; i < 3; i++){
        int cursum = 0;
        for(int j = i; j < 3; j++){
            cursum += arr[j];
            cout << cursum <<"\n";
        }
    }

    return 0;
}