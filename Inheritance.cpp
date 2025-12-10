#include <iostream>
using namespace std;

class animal{
    public:
        void identity(){
            cout << "I am an animal\n";
        }
};

class dog : public animal{
    public:
        void clearidentity(){
            cout << "I am a dog\n";
        }
};

int main()
{
    dog d1;
    d1.identity();
    d1.clearidentity();  
    return 0;
}