#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int b = 12;
    int c = 30;

    int max = (a > b)? ((a>c) ? a : c) : ((b > c)? b : c);
    cout << "Maximum of 3 numbers is: " << max << endl;
    return 0;


}