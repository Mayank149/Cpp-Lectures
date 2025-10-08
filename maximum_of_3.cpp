#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int b = 12;
    int c = 30;

    int max = (a > b)? ((a>c) ? a : c) : ((b > c)? b : c);
    int secondmax = (a > b)? ((a>c) ? (b>c ? b : c) : a) : ((b > c)? (c>a ? c : a) : b);
    cout << "Maximum of 3 numbers is: " << max << endl;
    cout << "Maximum of 3 numbers is: " << secondmax << endl;
    return 0;


}

