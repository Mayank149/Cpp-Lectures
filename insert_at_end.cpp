#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }

};

int main()
{
    Node* head = new Node(0);
    Node* cur = head;
    int arr[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        Node* n = new Node(arr[i]);
        cur->next = n;
        cur = cur->next;
    }

    cout << "Original:- \n";
    cur = head;
    while(cur){
        cout << cur->data << "->";
        cur = cur->next;
    }

    cur = head;
    while(cur->next){
        cur = cur->next;
    }

    cur->next = new Node(6);
    cur = head;
    cout << "\nAfter insertion:- \n";
    while(cur){
        cout << cur->data << "->";
        cur = cur->next;
    }

}