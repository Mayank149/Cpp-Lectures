#include <iostream>
using namespace std;

int main()
{
    int num = 456;
    int sum = 0;
    while(true){
        int digit = num%10;
        sum += digit;
        num = num / 10;
        if(num <= 0){
            num = sum;
            sum = 0;
            if(num < 10){
                break;
            }
        }
    }
    cout << num;
    return 0;
}