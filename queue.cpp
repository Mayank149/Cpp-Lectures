#include <iostream>
using namespace std;

class Queue{
    public:
    int arr[5];
    int front;
    int rear;
    Queue(){
        front = -1;
        rear = -1;
    }

    void push(int val){
        // Check if queue is full (before incrementing)
        if(rear == -1){
            rear = 0;
            arr[rear] = val;
            if(front == -1) front = 0;
        }
        else if((rear + 1) % 5 == front){
            cout << "Queue is Full\n";
            return;
        }
        else{
            rear = (rear + 1) % 5;
            arr[rear] = val;
        }
    }

    void pop(){
        if(front == -1){
            cout << "The Queue is empty\n";
            return;
        }
        if(front == rear){
            // Queue becomes empty after this pop
            arr[front] = 0;
            front = -1;
            rear = -1;
            return;
        }
        arr[front] = 0;
        front = (front + 1) % 5;
    }
    void display(){
        for(int ele : arr){
            cout << ele << " ";
        }
        cout << endl;
    }

};

int main()
{
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    q.pop();
    q.push(60);
    q.push(70);
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    q.display();
    return 0;
}