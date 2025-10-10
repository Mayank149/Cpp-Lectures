#include <iostream>

using namespace std;

int main() {

    int arr[5] = {1,2,-3,-4,5};
    int maxsum = INT_MIN;

    for(int i = 0; i < 5; i++){
        int sum = 0;
        for(int j = i; i < 5; i++){
            sum += arr[j];
            maxsum = max(sum,  maxsum);
        }
    }
    cout << maxsum;

    return 0;
}