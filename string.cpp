#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s1 = "Mayank ";
    string* s2 = new string("Bansal"); // Heap memory

    s1.append(*s2);
    cout << s1 << endl;
    int n = s1.size();
    cout << n << endl;
    int m = s1.length();
    cout << m << endl;
    for(int i = 0; i < n; i++){
        cout << s1.at(i);
    }
    cout << endl;
    cout << s1.substr(2, 4) << endl;
    cout << s1.find('B') << endl;
    s1.insert(2, "C");
    cout << s1.empty() << endl;
    cout << s1;
    
    return 0;
}