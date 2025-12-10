#include <iostream>
using namespace std;

class student{
    public:
        int roll;
        student(){
            cout << "Object created\n";
        }
        ~student(){
            cout << "Destructor called\n";
        }
};

int main()
{
    student s1;
    student* s2 = new student();
    return 0;
}