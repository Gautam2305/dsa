#include <bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next=temp;
    tail=tail->next;

}
void insertAtHead( Node* &head, int data){

    //new node create
    Node* temp = new Node(data);
    temp->next = head;
    head=temp;
}
void print(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* newNode = new Node(10);
    Node *head  = newNode;
    Node *tail = newNode;
    print(tail);
    // insertAtHead(head, 12);
    // print(head);
    // insertAtHead(head, 15);
    // print(head);
    insertAtTail(head, 12);
    print(tail);
    insertAtTail(head, 15);
    print(tail);

}