#include <iostream>
using namespace std;

class Stack{
    public:
    int arr[10];
    int top1;
    int top2;
    Stack(){
        top1 = -1;
        top2 = 10;
    }

    void push1(int val){
        if(top1 >= top2-1){
            cout << "Stack 1 is full\n";
            return;
        }
        top1++;
        arr[top1] = val;
    }
    void push2(int val){
        if(top1 >= top2-1){
            cout << "Stack 2 is full\n";
            return;
        }
        top2--;
        arr[top2] = val;
    }
    void pop1(){
        if(top1 > -1){
            top1--;
        }
        else{
            cout << "Stack1 is empty\n";
        }
    }
    void pop2(){
        if(top2 < 10){
            top2++;
        }
        else{
            cout << "Stack2 is empty\n";
        }
    }
    int peek1(){
        if(top1 == -1) return -1;
        return arr[top1];
    }
    int peek2(){
        if(top2 == 10) return -1;
        return arr[top2];
    }

};


int main()
{
    Stack st;

    st.push1(10);
    st.push1(20);
    st.push1(20);
    st.push1(270);
    st.push1(290);
    st.push1(300);
    st.push2(40);
    st.push2(50);
    st.push2(510);
    st.push2(520);
    st.push2(530);
    st.push2(540);
    st.push1(0);
    // st.pop1();
    // st.push1(100);
    // st.pop2();
    // st.pop2();
    cout << st.peek1() << " " << st.peek2();
    return 0;
}