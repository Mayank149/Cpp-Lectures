#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream file("file.txt");
    int n = 10;
    for(int i = 0; i < n; i++){
        file << i << " ";
    }

    file.close();

    ifstream ifile("file.txt");
    int arr[n];

    int val;
    int i = 0;
    while(ifile >> val || i < n){
        arr[i++] = val;
    }

    for(int ele : arr){
        cout << ele << " ";
    }
    ifile.close();

    return 0;
}