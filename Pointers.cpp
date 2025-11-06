#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // int* p = &a;
    // void* p1 = &a;
    // cout << *(int*)p1 << endl;
    // cout << *static_cast<int*>(p1);

    // int arr[] = {10, 20, 30, 40, 50};
    // int* p = arr;

    // cout << &arr << endl;
    // cout << p << endl;
    // cout << *p << endl;

    // // p++;
    // // cout << *p << endl;
    
    // int sum = 0;
    // for(int i = 0; i < 5; i++){
    //     sum += *(p + i);
    // }
    // cout << sum << endl;

    int a = 10;
    int* ptr = &a;
    int** dp = &ptr;
    cout << **dp << endl;

    return 0;
}