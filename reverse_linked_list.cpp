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
    Node* head = new Node(20);
    Node* cur = head;
    int arr[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        Node* n = new Node(arr[i]);
        cur->next = n;
        cur = cur->next;
    }

    cur = head;
    Node* prev = nullptr;
    Node* next;
    while(cur){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    while(prev){
        cout << prev->data << "->";
        prev = prev->next;
    }

    return 0;
}