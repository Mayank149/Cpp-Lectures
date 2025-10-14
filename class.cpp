#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Student{

    private:
        string name;
        int age;
        int reg_no;
    public:
        Student(string name, int age, int reg_no){
            this->name = name;
            this->age = age;
            this->reg_no = reg_no;
        }

        void setName(string name){
            this->name = name;
        }

        void getName(){
            cout << this->name << "\n";
        }
        void setAge(int age){
            this->age = age;
        }

        void getAge(){
            cout << this->age << "\n";
        }
        void setRegNo(int reg_no){
            this->reg_no = reg_no;
        }

        void getRegNo(){
            cout << this->reg_no << "\n";
        }

};

int main() {
    
    Student s1("Rohit", 19, 1234);

    // s1.setName("Rohit");
    // s1.setAge(15);
    // s1.setRegNo(1234);
    s1.getName();
    s1.getAge();
    s1.getRegNo();

    return 0;
}