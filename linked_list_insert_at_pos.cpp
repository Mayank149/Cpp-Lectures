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

    int count = 1;
    int pos = 3;
    Node* newnode = new Node(10);

    cur = head;
    while(cur->next && pos-1 != count){
        count++;
        cur = cur->next;
    }

    newnode->next = cur->next;
    cur->next = newnode;
    cur = head;
    cout << "\nAfter insertion:- \n";
    while(cur){
        cout << cur->data << "->";
        cur = cur->next;
    }


    return 0;
}