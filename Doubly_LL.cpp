#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }

};

void printList(Node* head){
    Node* cur = head;
    while(cur){
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}
void insertAtStart(Node* &head, int data){
    Node* n = new Node(data);
    if(!head){
        head = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
}

void insertAtEnd(Node* &tail, int data){
    Node* n = new Node(data);
    if(!tail){
        tail = n;
        return;
    }
    tail->next = n;
    n->prev = tail;
    tail = n;
    
}

int main()
{
    Node* head = new Node(1);
    Node* tail = head;
    insertAtEnd(tail, 2);
    insertAtEnd(tail, 3);
    insertAtEnd(tail, 4);

    printList(head);
    insertAtStart(head, 0);
    insertAtStart(head, 10);
    printList(head);

    return 0;
}