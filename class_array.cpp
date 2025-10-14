#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Student{

    private:
        string name;
        int age;
        int reg_no;
    public:
       
        void setDetails(string name, int age){
            this->name = name;
            this->age = age;
        }
        void getDetails(){
            cout << name << " " << age << "\n";
        }
};

int main() {
    
    Student arr[5];
    for(int i = 0; i < 5; i++){
        arr[i].setDetails("rohit", 20);
        arr[i].getDetails();
    }

    return 0;
}